#!/bin/bash

if [[ $# -eq 0 ]]; then
    echo "Usage: $0 <year1> [year2] [year3] ..."
    exit 1
fi

executables=()
total_compile_time=0
total_run_time=0
compile_start=$(date +%s.%N)

for year in "$@"; do
    echo "==== Processing year $year ===="
    for file in "$year"/day{1..25}.cpp; do
        if [[ -f "$file" ]]; then
            exe="${file%.cpp}"
            echo "Compiling $file ..."
            g++ -std=c++23 -Wall -Wextra -Wpedantic -Wfloat-equal -Wcast-align -Wold-style-cast -Woverloaded-virtual -Wnon-virtual-dtor -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wuseless-cast -Wformat=2 -Wsuggest-override -Wdouble-promotion -Wswitch-enum -Wformat-security -Wformat-overflow -Winvalid-offsetof -Wno-sign-compare -Ofast -march=native -flto -funroll-loops -fomit-frame-pointer -ffast-math -fno-trapping-math -finline-functions -fmerge-all-constants -fstrict-aliasing -falign-functions=32 -falign-loops=32 -falign-jumps=32 -DNDEBUG "$file" -lcrypto -o "$exe"

            if [[ $? -eq 0 ]]; then
                executables+=("$exe")
            else
                echo "❌ Compilation failed for $file"
            fi
        fi
    done
done

echo "---------------------------------"
compile_end=$(date +%s.%N)
total_compile_time=$(echo "$compile_end - $compile_start" | bc)
run_start=$(date +%s.%N)

for exe in "${executables[@]}"; do
    echo "Running $exe ..."
    ./"$exe"
    echo "---------------------------------"
done

run_end=$(date +%s.%N)
total_run_time=$(echo "$run_end - $run_start" | bc)

echo "✅ Total compilation time: $total_compile_time seconds"
echo "✅ Total execution time:   $total_run_time seconds"

for exe in "${executables[@]}"; do
    rm -f "$exe"
done

echo "🧹 All compiled files removed."
