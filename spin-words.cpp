#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += str[i];
        }
    }
    
    result += word;
    
    std::string newResult = "";
    int j = 0;
    
    while (j < result.length()) {
        if (result[j] == ' ') {
            j++;
            continue;
        }
        
        int k = j;
        while (k < result.length() && result[k] != ' ') {
            k++;
        }
        
        std::string temp = result.substr(j, k - j);
        
        if (temp.length() >= 5) {
            for (int i = temp.length() - 1; i >= 0; i--) {
                newResult += temp[i];
            }
        } else {
            newResult += temp;
        }
        
        j = k + 1;
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