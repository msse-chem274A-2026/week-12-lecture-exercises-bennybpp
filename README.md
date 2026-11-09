# Week 12 Lecture Exercises

Complete the three `main.cpp` starters:

- `EigenExercise`: form the symmetric part of a 5×5 matrix with Eigen.
- `BlasLapack-1`: compute `b = 8.2*a + b` using single-precision AXPY.
- `BlasLapack-2`: scale every other value of `a` using double-precision SCAL.

Use a C++17 compiler. The Eigen headers are included with the exercise. The
BLAS exercises require OpenBLAS, including its library for linking. On Ubuntu,
install `libopenblas-dev`.

From the repository root, run individual tests:

```sh
bash EigenExercise/run_test.sh
bash BlasLapack-1/run_test.sh
bash BlasLapack-2/run_test.sh
```

The scripts build in temporary directories. To run the same three-point grader
as GitHub Actions:

```sh
python3 .github/scripts/grade.py
```

The grader writes `grading-results.json` locally. Unfinished starters are
expected to fail. Submit changes to the three `main.cpp` files only.
