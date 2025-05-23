#!/bin/bash
#SBATCH --nodes=2
#SBATCH --mem=0
#SBATCH --ntasks-per-node=8
#SBATCH --cpus-per-task=8
#SBATCH --output=weighted_htram_smp.out
#SBATCH --partition=cpu
#SBATCH --account=mzu-delta-cpu
#SBATCH --job-name=weighted_htram_smp
#SBATCH --exclusive
#SBATCH --time=00:10:00      # hh:mm:ss for the job

# module swap PrgEnv-cray PrgEnv-gnu
#mkdir weighted_htram_Smp_projections
export PPN=6
# +commap 0-31:8 +pemap 1-31:8.6
# srun ./weighted_htram_smp_projections 62500000 1000000000 100 1 1 0.999 0.05 +ppn $PPN +setcpuaffinity +traceroot weighted_htram_Smp_projections +logsize 10000000
#srun ./weighted_htram_smp 249987721 999950844 100 1 2 0.995 0.1 +ppn $PPN +setcpuaffinity #+traceroot weighted_htram_Smp_projections +logsize 10000000
srun ./weighted_htram_smp 62500000 1000000000 100 1 1 0.999 0.05 +ppn $PPN +setcpuaffinity