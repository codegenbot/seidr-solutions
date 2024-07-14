#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    // Check the last word
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string or 'q' to quit: ";
        std::cin >> str;
        if (str == "q") {
            break;
        }
        std::cout << spinWords(str) << "\n";
    }
    return 0;
}