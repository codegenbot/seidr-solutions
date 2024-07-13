#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    for (char digit : input) {
        int num = digit - '0';
        std::cout << num * num;
    }

    return 0;
}