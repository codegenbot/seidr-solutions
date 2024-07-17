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
            newWord += " ";
        } else {
            newWord += result[i];
        }
    }
    
    int len = newWord.length();
    for (int i = 0; i < len; i++) {
        if (newWord[i] == ' ') {
            continue;
        } else if (newWord[i + 1] == ' ') {
            if (newWord.length() - i > 4) {
                std::string temp = newWord.substr(i, newWord.length() - i);
                for (int j = temp.length() - 1; j >= 0; j--) {
                    cout << temp[j];
                }
                i += temp.length();
            } else {
                cout << newWord[i];
            }
        } else if (newWord.length() - i > 4) {
            std::string temp = newWord.substr(i, newWord.length() - i);
            for (int j = temp.length() - 1; j >= 0; j--) {
                cout << temp[j];
            }
            i += temp.length();
        } else {
            cout << newWord[i];
        }
    }
    
    return newWord;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}