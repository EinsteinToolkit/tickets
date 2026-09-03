#PBS -q UCTlong
#PBS -N static_tov_mod_2
#PBS -m abe
#PBS -M allgwy001@myuct.ac.za
#PBS -l nodes=1:ppn=44:series600
#PBS -o /home/allgwy001/Output/static_tov_mod_2
#PBS -e /home/allgwy001/Output/static_tov_mod_2
module load software/EinsteinToolkit
cd /home/allgwy001/Output
export OMP_NUM_THREADS=1
mpirun -np 44 -hostfile $PBS_NODEFILE -v cactus_ET /home/allgwy001/Parameter_Files/static_tov_mod_2.par
