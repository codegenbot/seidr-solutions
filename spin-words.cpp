#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t wordPos = str.find(" ", pos);
        if (wordPos - pos >= 5) {
            std::string word = str.substr(pos, wordPos - pos);
            for (int i = word.size() - 1; i >= 0; --i)
                result += word[i];
        } else
            result += str.substr(pos, wordPos - pos + 1);
        
        if (wordPos != std::string::npos) {
            result += " ";
            pos = wordPos + 1;
        }
    }
    
    if (pos < str.size()) {
        std::size_t wordPos = str.find(" ", pos);
        if (str.size() - pos >= 5)
            for (int i = str.substr(pos).size() - 1; i >= 0; --i)
                result += str.substr(pos)[i];
        else
            result += str.substr(pos);
    }
    
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}