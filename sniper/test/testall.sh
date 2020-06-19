#!/bin/bash

apps = "api aso demo-scheduling dvfs fft fft-dvfs fft-hetero fft-hetero-cfg fft-marker fork mpi mpi-omp pinplay signal smc sniper-in-sniper spinloop"

for app in $apps
do
    make run -C $app
    python3 ../scripts/histdram.py $app/dram_log.csv
done
