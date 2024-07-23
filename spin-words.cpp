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

    int j = 0;
    while (j < result.length()) {
        bool spin = false;
        for (; j < result.length() && !spin; j++) {
            if (!isspace(result[j])) {
                spin = true;
            } else {
                break;
            }
        }
        if (spin) {
            std::string temp = result.substr(j);
            int k = temp.length();
            while (k-- > 0) {
                if (j + k < result.length() && !isspace(result[j+k])) {
                    break;
                }
                j++;
            }
            for (; j+k < result.length(); j++) {
                if (!isspace(result[j])) {
                    break;
                }
            }
            std::string tempRev = "";
            for (int m = --k; m >= 0; m--) {
                tempRev += temp[m];
            }
            result.replace(j, k+1, tempRev);
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