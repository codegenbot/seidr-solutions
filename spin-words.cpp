#include <iostream>
#include <string>

std::string spinWords(std::string& str) {
    std::string result = "";
    size_t start = 0;
    while (start < str.length()) {
        size_t spacePos = str.find(' ', start);
        if (spacePos == std::string::npos)
            spacePos = str.length();
        std::string word = str.substr(start, spacePos - start);
        if (word.length() >= 5) {
            result += std::string(word.rbegin(), word.rend());
        } else {
            result += word;
        }
        result += ' '; // Add space after each word except the last one
        if (spacePos < str.length()) {
            size_t end = spacePos;
            while(end > start && str[end-1] != ' ')
                --end;
            result += str.substr(start, end - start);
            start = end;
        } else
            start = spacePos + 1;
    }
    return result.trim(); // Remove trailing space
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Spin words: " << spinWords(str) << std::endl;
    return 0;
}