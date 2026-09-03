#include "Common_init.hpp"
#include "Common_util.hpp"

/* definition of global variables */
CAKERNEL_PUI *cakernel_pui;

void CaKernel_Init(CCTK_ARGUMENTS)
{
  DECLARE_CCTK_ARGUMENTS;
  int ndev = 0;
  int myhost = -1;
  int mydev = -1;
  int myproc = -1;
  int mynprocs = 0;
  int *myprocs = NULL;

// get total number of devices

#if HAVE_CUDA == 1
  /* get number of devices */
  CUDA_SAFE_CALL (cudaGetDeviceCount (&ndev));
#endif

  if (ndev == 0)
  {
    CCTK_WARN(
        0,
        "There are no devices available. (They may be busy, or the driver may not be installed.)");
  }

  /* we want to make sure that the number of MPI processes on a single node matches the
   * number of devices in the node. This condition shall be relaxed in the future when the
   * dynamic scheduling among GPUs and CPUs is ready.
   */
  myhost = CCTK_MyHost(cctkGH);
  myproc = CCTK_MyProc(cctkGH);
  mynprocs = CCTK_nProcsOnHost(myhost);

  if (ndev != mynprocs)
  {
    CCTK_WARN(0,
        "The number of devices doesn't match the number of MPI processes !");
  }

  MALLOC_SAFE_CALL(
      cakernel_pui = (CAKERNEL_PUI*) malloc(ndev * sizeof(CAKERNEL_PUI)));

  MALLOC_SAFE_CALL(myprocs = (int *) malloc(mynprocs * sizeof(int)));

  /* get a list of MPI process ids running on my host */
  CCTK_ProcsOnHost(myhost, myprocs);

  /* match devices with MPI processes */
  for (int i = 0; i < ndev; i++)
  {
    /* fill in the structure */
    cakernel_pui[i].host = myhost;
    cakernel_pui[i].dev = i;
    cakernel_pui[i].proc = myprocs[i];
    cakernel_pui[i].nprocs = mynprocs;
#if HAVE_CUDA == 1
    CUDA_SAFE_CALL(cudaGetDeviceProperties (&(cacuda_pui[i].devprop), i));
    if (myproc == myprocs[i])
    {
      CUDA_SAFE_CALL (cudaSetDevice (i));
      CCTK_VInfo(CCTK_THORNSTRING, "number of device %d", ndev);
      CCTK_VInfo(CCTK_THORNSTRING, "device %d is successfully assigned to process %d", i, myproc);
    }
#endif
  }
}
