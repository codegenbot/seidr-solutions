Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output;
    std::size_t prev = 0;
    for (std::size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            std::size_t length = i - prev;
            if (length >= 5) {
                for (int j = length - 1; j >= 0; --j)
                    output += input[prev + j];
            } else
                output += input.substr(prev, length);
            prev = i + 1;
        }
    }
    return output;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << spinWords(s) << std::endl;
    }
    return 0;
}