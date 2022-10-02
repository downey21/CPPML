
// Eigen 3

#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;
using Eigen::VectorXd;

int main() {
    MatrixXd m1(2,2);
    m1(0,0) = 3;
    m1(1,0) = 2.5;
    m1(0,1) = -1;
    std::cout << m1 << std::endl;
    m1(1,1) = m1(1,0) + m1(0,1);
    std::cout << m1 << std::endl;

    MatrixXd m2 = MatrixXd::Random(3,3); // -1 ~ 1 random number
    std::cout << m2 << std::endl;
    m2 = (m2 + MatrixXd::Constant(3,3,1)) * 10;
    std::cout << "m2 =" << std::endl << m2 << std::endl;
    VectorXd v2(3); // column vector
    v2 << 1, 1, 1;
    std::cout << v2 << std::endl;
    std::cout << "m2 * v2 =" << std::endl << m2 * v2 << std::endl;
}

