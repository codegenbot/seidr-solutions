#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result;
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            if (!word.empty())
                result += !word.length() >= 5 ? word + " " : std::string(word.rbegin(), word.rend()) + " ";
            word = "";
        } 
        else 
            word += c;
    }

    if (!word.empty())
        result += !word.length() >= 5 ? word : std::string(word.rbegin(), word.rend());
    else
        result += "";

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, str);
        if (str == "exit") break;
        std::cout << "Spin words: " << spinWords(str) << std::endl;
    }
}