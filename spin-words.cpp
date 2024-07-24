#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += " ";
            i++;
        } else if(strlen(&str[i]) >= 5) {
            for(int j = strlen(&str[i]); j > 0; j--) {
                result += str[i+j-1];
            }
            i += strlen(&str[i]);
        } else {
            int k = 0;
            while(i < str.length() && str[i] != ' ') {
                result += str[i];
                i++;
                k++;
            }
            for(int j = k; j > 0; j--) {
                result += str[i-j];
                i--;
            }
        }
    }
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}