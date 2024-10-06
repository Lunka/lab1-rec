#include <iostream>

double myPow(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / myPow(x, -n);
    return x * myPow(x, n - 1);
}

int main() {
    double x = 2.0;
    int n = 10; // Змінюйте n для тестування
    std::cout << myPow(x, n) << std::endl; // Виведе: 1024
    return 0;
}
