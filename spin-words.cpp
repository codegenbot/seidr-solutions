#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t wordEnd = pos;
        if (str.substr(pos, 1).length() >= 5) {
            std::reverse(str.begin() + pos, str.begin() + wordEnd);
        }
        result += str.substr(0, wordEnd);
        str.erase(0, wordEnd + 1);
    }
    return str;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string (or 'stop' to finish): ";
        std::cin >> str;
        if (str == "stop") break;
        std::cout << spinWords(str) << "\n";
    }
    return 0;
}