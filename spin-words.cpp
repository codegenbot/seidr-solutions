```c++
#include <iostream>
#include <string>
#include <algorithm>

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

    bool needSwap = false;
    std::string temp = "";

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            needSwap = false;
            temp = "";
        } else {
            if (!needSwap) {
                temp += result[i];
            } else {
                temp = result[i] + temp;
            }
        }

        if (i < result.length() - 1 && result[i+1] == ' ') {
            needSwap = false;
        } else if (result[i+1] >= 'a' && result[i+1] <= 'z') {
            needSwap = true;
        }
    }

    return temp + (temp.back() == ' ' ? "" : " ");
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}