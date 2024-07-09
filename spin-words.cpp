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
        if ((i > 0 && result[i] == ' ') || i + 1 >= result.length() || result[i + 1] != ' ') {
            newResult += result.substr(i);
            break;
        } else if (result.substr(i).length() <= 4) {
            newResult += result.substr(i) + " ";
            i += result.substr(i).length();
        } else {
            for (int j = result.substr(i).length() - 1; j >= 0; j--) {
                newResult += result.substr(i, j + 1)[j];
            }
            newResult += " ";
            i += result.substr(i).length();
        }
    }
    
    return newResult;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}