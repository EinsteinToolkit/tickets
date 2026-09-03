#!/bin/bash
#SBATCH --job-name=q1-cpu
#SBATCH --error=error.err
#SBATCH --output=output.log
#SBATCH --account=uib111
#SBATCH --partition=gpp
#SBATCH --qos=gp_resa
#SBATCH --time=3-00:00:00

#SBATCH --nodes=1
#SBATCH --ntasks-per-node=16
#SBATCH --cpus-per-task=7
#SBATCH --constraint=highmem

#SBATCH --mail-user=ar.p-gonzalez@uib.es
#SBATCH --mail-type=begin
#SBATCH --mail-type=end
#SBATCH --export=ALL
#SBATCH --no-requeue
#SBATCH  --exclusive

export SRUN_CPUS_PER_TASK=${SLURM_CPUS_PER_TASK}
export SLURM_CPU_BIND=none
export OMP_NUM_THREADS=7
export I_MPI_DEBUG=5
export KMP_AFFINITY=compact,granularity=core,physical

module load oneapi
module load cmake
module load fftw

mpirun -n 16 /home/uib/uib416720/ETK2024/CarSpX_CPU/Cactus/exe/cactus_sim_cx-cpu qc0-z4c.par
