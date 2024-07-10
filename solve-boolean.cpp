#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    if (s == "t") {
        std::cout << "True";
    } else {
        std::cout << "False";
    }
    return 0;
}