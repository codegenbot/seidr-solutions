#include <iostream>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string word;
    std::string result;

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