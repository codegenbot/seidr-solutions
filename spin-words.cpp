#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t start = 0;
    for (std::size_t end = 0; end <= str.length(); ++end) {
        if ((end == str.length() || isspace(str[end])) && end - start >= 5) {
            std::string reversed = std::string(str.substr(start, end - start));
            std::reverse(reversed.begin(), reversed.end());
            result += reversed;
            start = end;
        }
    }
    if (start < str.length()) {
        result += str.substr(start);
    }
    return result;
}

int main() {
    std::string input;
    while (std::cout << "input: ", std::getline(std::cin, input)) {
        std::cout << "output: " << spinWords(input) << std::endl;
    }
    return 0;
}