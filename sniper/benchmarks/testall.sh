#!/bin/bash

# apps="blackscholes bodytrack facesim ferret fluidanimate freqmine raytrace swaptions vips x264 canneal dedup"
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

outdir="parsec/parsec-2.1/out"
config="kruger"
input="small"
defnumcores=1

# for app in "${!apps[@]}"; do echo "$app: ${apps[$app]}"; done

for app in "${!apps[@]}"
do
    # echo "[BENCHMARK] [========== RUNNING benchmark ($app) ==========]"
    outdirapp=$outdir/$app
    cpfile=$outdirapp/checkpoints.csv
    mincores=${apps[$app]}
    [[ $mincores -gt $defnumcores ]] && numcores=$mincores || numcores=$defnumcores

    ./run-sniper -p parsec-$app -i $input -n $numcores -c $config -d $outdirapp
    
    if [ -f $cpfile ]; then
        python3 ../scripts/histdram.py $cpfile
    else
        echo "[BENCHMARK] File 'checkpoints.csv' not found"
    fi
    echo "[BENCHMARK] [========== FINISHING benchmark ($app) ==========]"
done
