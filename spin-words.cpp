#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result = "";
    while (getline(iss, word, ' ')) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("This is a test"); 
    return 0;
}