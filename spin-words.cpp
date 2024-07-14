```
#include <algorithm>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t pos = 0;
    while (pos < str.length()) {
        size_t spacePos = str.find(' ', pos);
        if (spacePos == std::string::npos)
            spacePos = str.length();
        std::string word = str.substr(pos, spacePos - pos);
        if (word.length() >= 5) {
            result += std::string(word.rbegin(), word.rend()) + " ";
        } else {
            result += word + " ";
        }
        pos = spacePos + 1;
    }
    return result.substr(0, result.size()-1); // remove trailing space
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    str.erase(0, 1); // remove leading/trailing spaces
    std::cout << "Spin words: " << spinWords(str) << std::endl;
    return 0;
}