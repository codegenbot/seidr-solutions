#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

int main() {
    std::string word;
    std::string result;

    std::string input;
    getline(std::cin, input);

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == ' ' || i == input.size() - 1) {
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += input[i];
        }
    }

    std::cout << result << std::endl;

    return 0;
}