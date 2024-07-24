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
            while ((j + 1 < result.length()) && (result[j + 1] == ' ')) {
                j++;
            }
            if (j - i >= 5) {
                for (int k = j; k > i; k--) {
                    newResult += result[k - 1];
                }
                newResult += " ";
                i = j;
            } else {
                newResult += result[i];
                for (i++; i < j; i++) {
                    newResult += result[i];
                }
            }
        } else {
            newResult += result[i];
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