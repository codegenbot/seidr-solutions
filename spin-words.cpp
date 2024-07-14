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
            for (int k = j + 1; k <= result.find(' ', j); k++) {
                if (k - j > 4) {
                    std::string temp = result.substr(j, k - j);
                    std::reverse(temp.begin(), temp.end());
                    newResult += temp;
                    j = k;
                    break;
                }
            }
        } else {
            newResult += result[j];
            j++;
        }
    }
    
    return newResult;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}