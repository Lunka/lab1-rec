#include <iostream>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 4; // Змінюйте n для тестування
    std::cout << fibonacci(n) << std::endl; // Виведе: 3
    return 0;
}
