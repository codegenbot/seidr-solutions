#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string temp = "";

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            if(temp.length() >= 5) {
                for(int j = temp.length()-1; j >= 0; j--) {
                    result += temp[j];
                }
            } else {
                result += temp;
            }
            temp = "";
        } else {
            temp += str[i];
        }
    }

    if(temp.length() >= 5) {
        for(int j = temp.length()-1; j >= 0; j--) {
            result += temp[j];
        }
    } else {
        result += temp;
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Result: " << spinWords(str) << std::endl;
    return 0;
}