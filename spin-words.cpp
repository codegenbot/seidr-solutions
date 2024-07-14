#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    while(getline(ss, word, ' ')) {
        if(word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result += word + (word != ss.str() ? " " : "");
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