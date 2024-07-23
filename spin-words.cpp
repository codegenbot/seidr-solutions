#include <algorithm>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    bool reverseWord = false;

    for (char c : str) {
        if (c == ' ') {
            if (reverseWord) {
                std::string temp = result;
                std::reverse(temp.begin(), temp.end());
                result = temp + " ";
                reverseWord = false;
            }
            else {
                result += " " + c;
            }
        } 
        else {
            if (!reverseWord) {
                int length = 0;
                while (c != ' ' && length < 5) {
                    c = str[str.find(c)];
                    result += c;
                    length++;
                }
                if(length >= 5) {
                    std::string temp = result;
                    std::reverse(temp.begin(), temp.end());
                    result = temp;
                }
            } 
            else {
                result += c;
            }
        }
    }

    if (reverseWord) {
        std::string temp = result;
        std::reverse(temp.begin(), temp.end());
        result = temp;
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