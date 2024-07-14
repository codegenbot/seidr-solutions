#include <algorithm>
#include <iostream>
#include <string>

void trim(std::string &s) {
    s.erase(0, s.find_first_not_of(' ')); // remove leading spaces
    s.erase(s.find_last_not_of(' ') + 1); // remove trailing spaces
}

std::string spinWords(std::string str) {
    trim(str); // Trim the input string
    std::string result = "";
    size_t start = 0;
    while (start < str.length()) {
        size_t spacePos = str.find(' ', start);
        if (spacePos == std::string::npos)
            spacePos = str.length();
        std::string word = str.substr(start, spacePos - start);
        if (word.length() >= 5) {
            result = std::string(word.rbegin(), word.rend()) + " " + result;
        } else {
            result += word + (word.length() < 5 ? " " : "") + " ";
        }
        start = spacePos + 1;
    }
    std::string temp = result; // create a temporary copy
    trim(temp); // trim the temporary copy
    return temp;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Spin words: " << spinWords(str) << std::endl;
    return 0;
}