#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (word.length() >= 5)
            result += (word.length() >= 5) ? std::string(word.rbegin(), word.rend()) + " ": word;
        else
            result += word;
    }

    return result; 
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}