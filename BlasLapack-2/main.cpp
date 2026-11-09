#include <iostream>
#include <cblas.h>

/*
The SCAL family of blas functions can be used to scale components of a vector (ie, X = a\*X, where a is a scalar and X is a vector).

Here is a link to the DSCAL documentation: 
https://netlib.org/lapack/explore-html/de/da4/group__double__blas__level1_ga793bdd0739bbd0e0ec8655a0df08981a.html#ga793bdd0739bbd0e0ec8655a0df08981a

The main function contains a vector `a`. 
Scale every other value by 2.0 using DSCAL. (ie, a[0] = 2.0\*a[0], a[2] = 2.0\*a[2]). 
You will have to use the `INCX` parameter of DSCAL.  Also, pay close
attention to the first parameter.

*/

int main(void)
{
    double a[] = {1.1, 3.8, 7.2, -7.7, 3.9, -2.9, 2.0, 9.1, -4.7, -0.2};

  
    /* Double values of a[0], a[2], a[4], a[6], and a[8] using dscal */
    cblas_dscal(5, 2.0, a, 2);

  
    /* Code below is for testing only */
    for(int i = 0; i < 10; i++)
      std::cout << a[i] << " ";
    std::cout << std::endl;

    return 0;
}
