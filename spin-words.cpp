#include <vector>
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
    int j = 0;
    
    while (j < result.length()) {
        if (result[j] == ' ') {
            for (int i = j + 1; i <= result.find(' ', j); i++) {
                newResult += result[i];
            }
            newResult += " ";
            j = result.find(' ', j) + 1;
        } else {
            int k = j;
            while (k < result.length() && result[k] != ' ') {
                k++;
            }
            if (k - j >= 5) {
                for (int i = k; i > j; i--) {
                    newResult += result[i-1];
                }
                newResult += " ";
                j = k;
            } else {
                for (int i = j; i <= k; i++) {
                    newResult += result[i];
                }
                newResult += " ";
                j = k + 1;
            }
        }
    }
    
    return newResult.substr(0, newResult.length() - 1);
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}