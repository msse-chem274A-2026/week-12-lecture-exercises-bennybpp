#!/usr/bin/env bash
set -euo pipefail

exercise_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
repo_dir="$(cd "$exercise_dir/.." && pwd)"
temp_dir="$(mktemp -d)"
trap 'rm -r "$temp_dir"' EXIT

"${CXX:-g++}" -std=c++17 -Wall -Wextra -pedantic \
  "$exercise_dir/main.cpp" -I"$exercise_dir/cblas" -o "$temp_dir/main" \
  "${BLAS_LIB:--lopenblas}"
"$temp_dir/main" > "$temp_dir/output"
python3 "$repo_dir/tests/check_blas.py" "$temp_dir/output" 6.12 33.16 68.14 -67.84 31.78
echo "SUCCESS"
