Here is the completed code:

#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string temp = "";
    
    for (char c : str) {
        if (c != ' ') {
            temp += c;
        } else {
            if (temp.length() >= 5) {
                std::reverse(temp.begin(), temp.end());
            }
            result += temp + " ";
            temp = "";
        }
    }
    
    if (temp.length() >= 5) {
        std::reverse(temp.begin(), temp.end());
    }
    result += temp;
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}