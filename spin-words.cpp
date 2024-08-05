#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordStart = 0;
    for(int i=0; i<=str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            std::string word = str.substr(wordStart, i-wordStart);
            if(word.length() >= 5) {
                result += std::string(word.rbegin(), word.rend()) + " ";
            } else {
                result += word + " ";
            }
            wordStart = i+1;
        }
    }
    return result.substr(0, result.length()-1);
}

int main() {
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}