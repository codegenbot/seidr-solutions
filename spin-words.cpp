#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    
    result += word;
    
    std::string newWord;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            for (int j = i+1; j > i; j--) {
                newWord += result[j-1];
            }
            result.erase(i, j-i);
            i--;
        } else {
            newWord += result[i];
        }
    }
    
    if (newWord.length() >= 5) {
        for (int j = newWord.length()-1; j >= 0; j--) {
            result += newWord[j];
        }
    }
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}