#include <iostream>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string word;
    std::string result;

    for (size_t i = 0; i < input.size(); ++i) {
        if (input[i] != ' ') {
            word += input[i];
        } else {
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + ' ';
            word = "";
        }
    }

    if (word.size() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;

    std::cout << result << std::endl;

    return 0;
}