```
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

    for (int i = result.length() - 1; i >= 0; --i) {
        if (result[i] == ' ') {
            int j = i;
            while (j > 0 && result[j-1] != ' ') --j;
            std::string temp = result.substr(j, i-j+1);
            reverse(temp.begin(), temp.end());
            result.replace(i+1, temp.length(), temp);
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}