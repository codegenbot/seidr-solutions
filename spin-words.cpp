#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    // split string into words
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; --i)
                    result += word[i];
                result += " ";
            } else
                result += word + " ";
            word = "";
        } else
            word += c;
    }

    // add the last word
    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; --i)
            result += word[i];
    } else
        result += word;

    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}