#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += c;
        }
    }

    result += word;

    int i = 0;
    while (i < result.length()) {
        if (result[i] != ' ') {
            i++;
        } else {
            for (int j = i + 1; j < result.length(); j++) {
                if (j - i > 4) {
                    std::reverse(result.substr(i, j - i).begin(), result.substr(i, j - i).end());
                    break;
                }
            }
            i++;
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}