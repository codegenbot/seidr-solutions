#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (word.length() >= 5)
            std::ostringstream oss;
            for (auto it = word.rbegin(); it != word.rend(); ++it) {
                oss.put(*it);
            }
            if (oss.tellp() > 0) {
                result += oss.str();
            } else {
                result += word + " ";
            }
        else
            result += word + " ";
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