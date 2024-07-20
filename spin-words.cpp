#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result;
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += std::string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            word = "";
        } else
            word += c;
    }

    if (word.length() >= 5)
        result += std::string(word.rbegin(), word.rend());
    else
        result += word;

    return result;
}

int main() {
    std::cout << "Enter a string: ";
    while(getline(std::cin, std::string(str))) {
        if (str == "exit") break;
        std::cout << "Spin words: " << spinWords(str) << std::endl;
    }
    return 0;
}