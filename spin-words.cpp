```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string& str) {
    std::string result = "";
    size_t start = 0;
    tempResult = ""; // Declare a new string to store the result
    while (start < str.length()) {
        size_t spacePos = str.find(' ', start);
        if (spacePos == std::string::npos)
            spacePos = str.length();
        std::string word = str.substr(start, spacePos - start);
        if (word.length() >= 5)
            tempResult += std::string(word.rbegin(), word.rend()) + " ";
        else
            tempResult += word + " ";
        start = spacePos + 1;
    }
    return tempResult;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Spin words: " << spinWords(str) << std::endl;
    return 0;
}