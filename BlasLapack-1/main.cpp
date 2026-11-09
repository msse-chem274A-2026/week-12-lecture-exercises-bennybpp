#include <iostream>
#include <cblas.h>

/*

The AXPY family of blas functions can be used to compute a constant\*vector + vector (ie, Y = a\*X+Y, where a is a scalar and X and Y are vectors)

Here is a link to the SAXPY documentation: 
https://netlib.org/lapack/explore-html/df/d28/group__single__blas__level1_gad2a52de0e32a6fc111931ece9b39726c.html#gad2a52de0e32a6fc111931ece9b39726c

In the main function are two vectors `a` and `b`. 
Compute `8.2*a+b` using blas. 
Note that the vector are of the `float` type, not `double`.
*/

int main(void)
{
    float a[] = {1.1, 3.8, 7.2, -7.7, 3.9};
    float b[] = {-2.9, 2.0, 9.1, -4.7, -0.2};

  
    /* Compute 8.2*a+b here */
    cblas_saxpy(5, 8.2f, a, 1, b, 1);


    /* Code below is for testing only */
    for(int i = 0; i < 5; i++)
      std::cout << b[i] << " ";
    std::cout << std::endl;

    return 0;
}
