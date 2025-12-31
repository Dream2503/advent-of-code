#!/usr/bin/env bash
set -euo pipefail

if [[ $# -ne 1 ]]; then
    echo "usage: $0 <header.hpp>"
    exit 1
fi

HEADER="$1"
BASENAME="$(basename "$HEADER")"
OUTDIR="${BASENAME}.gch"

mkdir -p "$OUTDIR"

echo "[+] building run gch"
time g++ -std=c++23 "$HEADER" -o "$OUTDIR/run.gch"

echo "[+] building debug gch"
time g++ -std=c++23 -Wall -Wextra -Wpedantic -g2 "$HEADER" -o "$OUTDIR/debug.gch"

echo "[+] building optimized gch"
time g++ -std=c++23 -Wall -Wextra -Wpedantic -Wfloat-equal -Wcast-align -Wold-style-cast -Woverloaded-virtual -Wnon-virtual-dtor -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wuseless-cast -Wformat=2 -Wsuggest-override -Wdouble-promotion -Wswitch-enum -Wformat-security -Wformat-overflow -Winvalid-offsetof -Wno-sign-compare -Ofast -march=native -flto=auto -funroll-loops -fomit-frame-pointer -ffast-math -fno-trapping-math -finline-functions -fmerge-all-constants -fstrict-aliasing -falign-functions=32 -falign-loops=32 -falign-jumps=32 -DNDEBUG "$HEADER" -o "$OUTDIR/optimized.gch"

echo "✔ GCHs created in $OUTDIR"
