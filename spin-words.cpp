#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result;
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += std::string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            word = "";
        } 
        else {
            word += c;
            if ((str.length()-1) == str.find(c) && word.length() >= 5)
                result = (result != "") ? result + std::string(word.rbegin(), word.rend()) + " " : std::string(word.rbegin(), word.rend());
            else
                result = (result != "") ? result + word + " " : word + " ";
        }
    }

    if (word.length() >= 5)
        result += std::string(word.rbegin(), word.rend());
    else
        result += word;

    return result;
}

int main() {
    std::cout << spinWords("gaapcswuk") << std::endl;
    return 0;
}