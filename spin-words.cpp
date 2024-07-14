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
    int len;
    
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            newResult += " ";
            continue;
        } else if ((len = strlen(&result[i])) >= 5) {
            for (int j = len - 1; j >= 0; j--) {
                newResult += result[i + j];
            }
            i += len - 1;
        } else {
            newResult += &result[i];
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