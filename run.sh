#!/bin/bash

if [[ -z "$1" ]]; then
    echo "Usage: $0 <year>"
    exit 1
fi

year="$1"
executables=()
total_compile_time=0
total_run_time=0
compile_start=$(date +%s.%N)

for file in "$year"/day{1..25}.cpp; do
    if [[ -f "$file" ]]; then
        exe="${file%.cpp}"
        echo "Compiling $file ..."
        g++ -std=c++23 "$file" -lcrypto -o "$exe"

        if [[ $? -eq 0 ]]; then
            executables+=("$exe")
        else
            echo "Compilation failed for $file"
        fi
    fi
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
echo "Total compilation time: $total_compile_time seconds"
echo "Total execution time: $total_run_time seconds"

for exe in "${executables[@]}"; do
    rm -f "$exe"
done

echo "All compiled files removed."
