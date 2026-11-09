#include <iostream>
#include <cassert>
#include <Eigen/Eigen>

using namespace Eigen;

/*
Using the eigen library, create a symmetrized version of a matrix.

A matrix can be symmetrized by adding it to its transpose and multiplying by 0.5.

`S = 0.5(A + AT)`

Where A is a matrix and AT is its transpose.
*/

int main() {
  MatrixXd m = MatrixXd::Random(5,5);

  std::cout << m << std::endl << std::endl;

  /* Create a matrix m2 that is a symmetrized version of m */
  MatrixXd m2 = 0.5 * (m + m.transpose());
  
    
  std::cout << m2 << std::endl << std::endl;

  /* Testing code below */
  MatrixXd expected = 0.5 * (m + m.transpose());
  assert(m2.rows() == m.rows() && m2.cols() == m.cols());
  assert(m2.isApprox(expected, 1e-12));
  assert(m2.isApprox(m2.transpose(), 1e-12));
  std::cout << "All ok!" << std::endl;
}
