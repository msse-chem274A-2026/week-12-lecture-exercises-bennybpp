"""Compare the exercise's printed BLAS vector with expected values."""

import math
import sys
from pathlib import Path

values = Path(sys.argv[1]).read_text().split()
expected = [float(value) for value in sys.argv[2:]]
if len(values) != len(expected):
    raise SystemExit(f"Expected {len(expected)} numbers, got {len(values)}: {values}")
try:
    actual = [float(value) for value in values]
except ValueError as error:
    raise SystemExit(f"Output contains a nonnumeric value: {values}") from error
for index, (got, want) in enumerate(zip(actual, expected)):
    if not math.isclose(got, want, rel_tol=1e-5, abs_tol=1e-4):
        raise SystemExit(f"Value {index}: expected {want}, got {got}")
