#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    if (input == "t") {
        std::cout << "True";
    } else {
        std::cout << "False";
    }

    return 0;
}