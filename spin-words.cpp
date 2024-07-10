#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += sentence[i];
        }
    }
    
    result += word;
    
    std::string reversedWord;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            while (i < result.length() && result[i] == ' ')
                i++;
            int j = i - 1;
            while (j > 0 && result[j] != ' ') 
                j--;
            reversedWord = result.substr(j, i-j) + " ";
        } else if (result[i].size() >= 5) {
            for (int j = i; j < result.length(); j++) {
                if (result[j] == ' ') {
                    i = j - 1;
                    break;
                }
                reversedWord = result[j] + reversedWord;
            }
        } else {
            for (int j = i; j < result.length(); j++) {
                if (result[j] == ' ')
                    break;
                reversedWord = result[j] + reversedWord;
            }
        }
    }
    
    return reversedWord;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}