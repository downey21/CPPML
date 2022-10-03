
// Eigen 3

#include <iostream>
#include <Eigen/Dense>

// using Eigen::MatrixXd;
// using Eigen::VectorXd;

int main() {
    Eigen::MatrixXd m1(2,2);
    m1(0,0) = 3;
    m1(1,0) = 2.5;
    m1(0,1) = -1;
    std::cout << m1 << std::endl;
    m1(1,1) = m1(1,0) + m1(0,1);
    std::cout << m1 << std::endl;

    Eigen::MatrixXd m3(2, 2);
    m3 << 1, 2, 3, 4;
    std::cout << m3 << std::endl;

    Eigen::MatrixXd m2 = Eigen::MatrixXd::Random(3,3); // -1 ~ 1 random number
    std::cout << m2 << std::endl;
    m2 = (m2 + Eigen::MatrixXd::Constant(3,3,1)) * 10;
    std::cout << "m2 =" << std::endl << m2 << std::endl;
    Eigen::VectorXd v2(3); // column vector
    v2 << 1, 1, 1;
    std::cout << v2 << std::endl;
    std::cout << "m2 * v2 =" << std::endl << m2 * v2 << std::endl;

    std::cout << "m3 shape: " << m3.rows() << " by " << m3.cols() << std::endl;
    std::cout << "m3 size: " << m3.size() << std::endl;

    m3.resize(1, 4);
    std::cout << m3 << std::endl;

    m3.resize(2, 2);
    std::cout << m3 << std::endl;

    m3.resize(4, 1);
    std::cout << m3 << std::endl;

    Eigen::MatrixXd m4 = m3;

    m3.resize(3, 3);
    std::cout << m3 << std::endl;
    std::cout << m4 << std::endl;
}

