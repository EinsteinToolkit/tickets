#! /bin/bash

#PBS -l nodes=6:ppn=20 ? Node Requeired : Cores/Procs

#PBS -N VE_3D ? Job Name

#PBS -q batch ? Queue Name

#PBS -j oe ? To get Output and Error Files

cd $PBS_O_WORKDIR

#cat $PBS_NODEFILE > pbsnodes

mpirun_rsh -hostfile ./hostfile -np 120 ./a.out

