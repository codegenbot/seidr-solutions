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
    
    std::string newResult = "";
    int j = 0;
    
    while (j < result.length()) {
        if (result[j] == ' ') {
            for (int k = j + 1; k <= result.find(' ', j); k++) {
                newResult += result[k];
            }
            newResult += " ";
            j = result.find(' ', j) + 1;
        } else {
            int wordLength = 0;
            while (j < result.length() && result[j] != ' ') {
                j++;
                wordLength++;
            }
            
            if (wordLength >= 5) {
                for (int k = j - 1; k >= j - wordLength; k--) {
                    newResult += result[k];
                }
                newResult += " ";
                j = result.find(' ', j);
            } else {
                for (int k = j - 1; k >= j - wordLength; k--) {
                    newResult += result[k];
                }
                newResult += " ";
                j++;
            }
        }
    }
    
    return newResult;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}