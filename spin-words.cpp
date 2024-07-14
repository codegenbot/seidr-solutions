#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t prevSpaceIndex = 0;
    
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::string word = str.substr(prevSpaceIndex, i - prevSpaceIndex);
            
            if (word.length() >= 5)
                std::reverse(word.begin(), word.end());
            
            result += word + " ";
            prevSpaceIndex = i + 1;
        }
    }
    
    return result.substr(0, result.size() - 1); // remove the trailing space
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}