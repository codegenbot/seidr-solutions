```
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

    int start = 0;
    for(int i = 0; i <= result.length(); i++){
        if(i == result.length() || result[i] == ' '){
            std::string temp = result.substr(start, i-start);
            if(temp.length() >= 5) {
                for (int j = temp.length()-1; j >= 0; j--) {
                    result.replace(start, temp.length(), temp.substr(j, 1));
                }
            } else {
                start = i+1;
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