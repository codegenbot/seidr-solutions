#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    if (s == "T") {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}