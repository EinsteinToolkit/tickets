#!/bin/bash

#SBATCH -J hello_world
#SBATCH -n 1
#SBATCH --ntasks-per-core=1
#SBATCH --ntasks-per-socket=1
#SBATCH -p test
#SBATCH -t 0-00:01:00
#SBATCH -A pn34tu
#SBATCH -o %x-%j.log

#MODULES

export OMP_NUM_THREADS=1

cd $SLURM_SUBMIT_DIR

RUN="mpirun -n 1"
EXE="/dss/dsshome1/00/di39wog2/ET/Cactus/exe/cactus_ET_SUPERMUCNG"
PARAM="/dss/dsshome1/00/di39wog2/ET/Cactus/arrangements/CactusExamples/HelloWorld/par/HelloWorld.par"

$RUN $EXE $PARAM
