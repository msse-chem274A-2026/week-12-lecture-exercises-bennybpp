#!/usr/bin/env bash
set -euo pipefail

exercise_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
temp_dir="$(mktemp -d)"
trap 'rm -r "$temp_dir"' EXIT

"${CXX:-g++}" -std=c++17 -Wall -Wextra -pedantic \
  "$exercise_dir/main.cpp" -I"$exercise_dir" -o "$temp_dir/main"
"$temp_dir/main" > "$temp_dir/output"
grep -Fxq 'All ok!' "$temp_dir/output"
echo "SUCCESS"
