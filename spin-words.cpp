#include <sstream>
#include <iostream>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result;

    while (iss >> word) {
        if(word.size()>4)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.find_last_of(" ")).substr(1);
}

int main() {
    std::string str = "Hello World";
    std::cout << spinWords(str) << std::endl;
    return 0;
}