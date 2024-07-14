#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            word = str.substr(i - (word.length() > 4 ? 5 : 0), i);
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
        }
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    std::string str;
    while (std::cout << "Enter a string: ", std::getline(std::cin, str)) {
        std::cout << "Spin Words: " << spinWords(str) << "\n";
    }
    return 0;
}