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
        } else if (result.length() - j > 4) {
            for (int i = j; i < result.find(' ', j); i++) {
                newResult += result[i];
            }
            newResult += " ";
            j = result.find(' ', j);
        } else {
            while (j < result.length() && result[j] != ' ') {
                newResult += result[j];
                j++;
            }
            newResult += " ";
            j++;
        }
    }
    
    for (int i = 0; i < newResult.length(); i++) {
        if (newResult[i] == ' ') {
            for (int j = i + 1; j <= newResult.find(' ', i); j++) {
                newResult[j - i - 1] = newResult[newResult.size() - j];
            }
            i = newResult.find(' ', i);
        } else if (newResult.length() - i > 4) {
            for (int j = i; j < newResult.find(' ', i); j++) {
                newResult[j - i] = newResult[newResult.size() - j - 1];
            }
            i = newResult.find(' ', i);
        } else {
            while (i < newResult.length() && newResult[i] != ' ') {
                newResult[i - i] = newResult[newResult.size() - i - 1];
                i++;
            }
            i++;
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