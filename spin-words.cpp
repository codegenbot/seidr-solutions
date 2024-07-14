#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += str[i];
        }
    }
    
    result += word;
    
    std::string newWord;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            newWord += " ";
        } else {
            newWord += result[i];
        }
        
        int len = newWord.length();
        if (len >= 5) {
            std::string temp = newWord;
            for (int j = len - 1; j >= 0; j--) {
                cout << temp[j];
            }
            newWord.clear();
        } else {
            newWord += " ";
        }
    }
    
    return newWord.substr(1, newWord.length() - 2);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}