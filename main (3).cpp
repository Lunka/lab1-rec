#include <iostream>

int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n = 3; // Змінюйте n для тестування
    std::cout << climbStairs(n) << std::endl; // Виведе: 3
    return 0;
}
