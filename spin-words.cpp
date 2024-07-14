#include <vector>
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
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            while (j < i) {
                newResult += result[j];
                j++;
            }
            newResult += " ";
            j = i + 1;
        } else if (j < i) {
            newResult += result[i];
        } else {
            int len = i - j;
            for (int k = len; k > 4; k--) {
                newResult += result[j + k - 1];
            }
            j = i + 1;
        }
    }
    
    while (j < result.length()) {
        newResult += result[j];
        j++;
    }
    
    return newResult;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    
    return 0;
}