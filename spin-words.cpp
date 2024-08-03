#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordStart = 0;
    for(int i=0; i <= sentence.length(); i++) {
        if(i == sentence.length() || sentence[i] == ' ') {
            std::string word = sentence.substr(wordStart, i-wordStart);
            if(word.length() >= 5) {
                result += std::string(word.rbegin(), word.rend()) + " ";
            } else {
                result += word + " ";
            }
            wordStart = i+1;
        }
    }
    return result.substr(0, result.length()-1); // remove the extra space at the end
}

int main() {
    std::string sentence;
    while(std::cin >> sentence) {
        std::cout << spinWords(sentence) << std::endl;
    }
    return 0;
}