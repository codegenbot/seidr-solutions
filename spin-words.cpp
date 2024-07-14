```cpp
#include <algorithm>
#include <iostream>
#include <string>

void trim(std::string &s) {
    s.erase(0, s.find_first_not_of(' ')); // remove leading spaces
    s.erase(s.find_last_not_of(' ') + 1); // remove trailing spaces
}

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    while (start < str.length()) {
        size_t spacePos = str.find(' ', start);
        if (spacePos == std::string::npos)
            spacePos = str.length();
        std::string word = str.substr(start, spacePos - start);
        if (word.length() >= 5) {
            result += std::string(word.rbegin(), word.rend()) + " ";
        } else {
            result += word + " ";
        }
        start = spacePos + 1;
    }
    trim(result); // no assignment needed, just call the function
    result.pop_back(); // remove the last character (the trailing space)
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Spin words: " << spinWords(str) << std::endl;
    return 0;
}