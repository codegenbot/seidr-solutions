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
    
    std::string newResult = "";
    for (int i = 0; i < result.length(); i++) {
        if ((result[i] >= 'a' && result[i] <= 'z') || (result[i] >= 'A' && result[i] <= 'Z')) {
            int j = i;
            while ((j < result.length()) && ((result[j] >= 'a' && result[j] <= 'z') || (result[j] >= 'A' && result[j] <= 'Z'))) {
                j++;
            }
            if (j - i > 4) {
                for (int k = j; k > i; k--) {
                    newResult += result[k-1];
                }
                newResult += " ";
                i = j;
            } else {
                newResult += result[i];
                for (int k = i + 1; k < j; k++) {
                    newResult += result[k];
                }
                newResult += " ";
                i = j;
            }
        } else {
            newResult += result[i];
        }
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