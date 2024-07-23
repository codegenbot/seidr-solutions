```cpp
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
    for (int i = 0; i <= result.length(); i++) {
        if (i == result.length() || result[i] == ' ') {
            std::string temp = result.substr(start, i - start);
            if (temp.length() >= 5) { 
                result.replace(start, i - start, reverse(temp).c_str());
            }
            start = i + 1;
        }
    }

    return result;
}

std::string reverse(std::string str) {
    std::string res = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        res += str[i];
    }
    return res;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}