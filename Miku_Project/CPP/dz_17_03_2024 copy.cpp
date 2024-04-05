#include <iostream>

using namespace std;

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int sumInRange(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }
    return sum;
}

bool isLucky(int number) {
    int sum_first_half = 0, sum_second_half = 0;
    
    for (int i = 0; i < 6; ++i) {
        if (i < 3)
            sum_first_half += number % 10;
        else
            sum_second_half += number % 10;
        number /= 10;
    }
    
    return sum_first_half == sum_second_half;
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl;

    cout << "Sum from 1 to 5: " << sumInRange(1, 5) << endl;

    cout << "123321 is lucky? " << (isLucky(123321) ? "Yes" : "No") << endl;

    return 0;
}
