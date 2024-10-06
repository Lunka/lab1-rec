#include <iostream>
#include <string>

void printReverse(const std::string &str, int index) {
    if (index < 0) {
        return;
    }
    std::cout << str[index];
    printReverse(str, index - 1);
}

int main() {
    std::string input = "tiger";
    printReverse(input, input.length() - 1);
    return 0;
}

