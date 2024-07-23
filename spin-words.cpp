#include <iostream>
#include <string>

std::string newWord(std::string str) {
    std::string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += newWord(word) + " ";
            else
                result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5)
        result += newWord(word);
    else
        result += word;

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}