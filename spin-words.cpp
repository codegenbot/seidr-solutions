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
    while(j <= result.length()) {
        if (result[j] == ' ' || j+1 >= result.length()) {
            std::string temp = result.substr(j);
            if (temp.length() > 4) {
                for(int k = temp.length()-1; k >= 0; k--) {
                    result.replace(j, temp.length(), temp.substr(k, 1));
                }
            }
            j += temp.length()+1;
        } else {
            j++;
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