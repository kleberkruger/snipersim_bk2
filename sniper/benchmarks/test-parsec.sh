#!/bin/bash

input=$1
config=$2
numcores=$3

if [ -z ${input} ]; then input="test"; fi
if [ -z ${config} ]; then config="gainestown"; fi
if [ -z ${numcores} ]; then numcores=1; fi

outdir="parsec/parsec-2.1/out/$input/$config/"

apps_list="blackscholes bodytrack facesim ferret fluidanimate freqmine raytrace swaptions vips x264 canneal dedup"

declare -A apps=( 
    ["blackscholes"]=2 
    ["bodytrack"]=3 
    ["facesim"]=1 
    ["ferret"]=6 # problema kruger
    ["fluidanimate"]=2 
    ["freqmine"]=1 
    ["raytrace"]=2 
    ["swaptions"]=2 
    ["vips"]=3 
    ["x264"]=1 
    ["canneal"]=2 
    ["dedup"]=4 )

# for app in "${!apps[@]}"
for app in $apps_list
do
    echo "[BENCHMARK] [========== RUNNING benchmark ($app) ==========]"
    outdirapp=$outdir/$app
    cpfile=$outdirapp/checkpoints.csv
    mincores=${apps[$app]}
    [[ $mincores -gt $numcores ]] && ncores=$mincores || ncores=$numcores

    ./run-sniper -p parsec-$app -i $input -n $ncores -c $config -d $outdirapp
    
    if [ -f $cpfile ]; then
        python3 ../scripts/histdram.py $cpfile
    else
        echo "[BENCHMARK] File 'checkpoints.csv' NOT FOUND"
    fi
    echo "[BENCHMARK] [========== FINISHING benchmark ($app) ==========]"
    echo ""
done
