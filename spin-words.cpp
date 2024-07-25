#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (char c : sentence) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += newWord(word);
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

std::string newWord(std::string str) {
    std::string reverseStr = "";
    for(int i=str.length()-1; i>=0; i--)
        reverseStr+=str[i];
    return reverseStr;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}