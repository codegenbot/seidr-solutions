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
    for (int i = 0; i < result.length(); i++) {
        if ((result[i] >= 'a' && result[i] <= 'z') || (result[i] >= 'A' && result[i] <= 'Z')) {
            int j = i;
            while (j > 0 && (result[j-1] >= 'a' && result[j-1] <= 'z' || result[j-1] >= 'A' && result[j-1] <= 'Z')) {
                j--;
            }
            if (j - i >= 5) {
                for (; j >= i; j--) {
                    newResult += result[j];
                }
            } else {
                newResult += result[i];
            }
        } else {
            newResult += result[i];
        }
    }
    
    return newResult;
}