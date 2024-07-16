#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t len = pos + 1;
        if (len <= 5 || str.substr(0, pos).length() < 5) {
            result += str.substr(0, pos) + " ";
            str.erase(0, pos + 1);
        } else {
            result += std::string(str, 0, pos).reverse() + " ";
            str.erase(0, pos + 1);
        }
    }
    if (str.length() > 4) {
        result += str.reverse();
    } else {
        result += str;
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, str);
        if (str == "exit") break;
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}