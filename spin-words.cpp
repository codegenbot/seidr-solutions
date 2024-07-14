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
    
    int length, start, end;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            start = i + 1;
        }
        if ((i == result.length() - 1) || (result[i] == ' ')) {
            end = i;
            length = end - start;
            
            if (length >= 5) {
                std::string temp = "";
                for (int j = end; j > start; j--) {
                    temp += result[j - 1];
                }
                result.replace(start, length + 1, temp);
            }
        }
    }
    
    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    
    return 0;
}