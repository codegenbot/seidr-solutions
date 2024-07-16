#include <sstream>
#include <iostream>

std::string spinWords(std::string str);

int main() {
    std::string str = "Hello World";
    std::cout << spinWords(str) << std::endl;
    return 0;

}

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.size() - 1);
}