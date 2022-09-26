#include <iostream>
#include <cmath>

using namespace std;

/*
void
*/

/*
bool
*/

/*
char
*/

/*
int
*/

/*
float
double
long double
*/

/*
C++의 경우 변수 생성 시 메모리 주소가 할당됨.
변수에 값을 할당 시, 값은 메모리 주소에 저장됨.
변수명 앞에 &를 붙이면 변수의 메모리 주소를 의미한다.

R, Python과 조금 다른 것 같네.
*/

void my_func(void);
double square_func(double number);

int main(void) {

    int variable1(10);

    std::cout << variable1 << std::endl;

    my_func();

    double number;

    cout << "숫자를 입력하세요 :";
    cin >> number;

    cout << number << std::endl;
    cout << square_func(number) << endl; // std::cout 은 기본적으로 6자리까지 보여준다.

    if (number < 10) {
        cout << "10보다 작습니다." << endl;
    }
    if (number < 20) {
        cout << "20보다 작습니다." << endl;
    }
    if (number < 30) {
        cout << "30보다 작습니다." << endl;
    }
    else {
        cout << "30이상입니다!." << endl;
    }

    int arr[3] = {1, 2, 3};
    std::cout << arr << std::endl; // 0x30d4d997c
    cout << arr[0] << endl;

    bool loop = true;
    char input;
    while (loop) {
        cin >> input;

        if (input == 'q') {
            loop = false;
        }
    }

    int studentID[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 학번은 " << studentID[i] << "입니다" << endl;
    }

    int y;
    std::cout << y << std::endl;
    std::cout << &y << std::endl;

    y = 10;
    std::cout << y << std::endl;
    std::cout << &y << std::endl;

    return 0;
}

void my_func(void) {
    cout << "my_function_test" << endl;
}

double square_func(double number) {
    return std::sqrt(number);
}