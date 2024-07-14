#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            wordLength = i - result.length();
            if (wordLength >= 5)
                for (int j = wordLength - 1; j >= 0; j--)
                    result += str[result.length() + j];
            else
                result += str.substr(result.length(), wordLength);
            if (i != str.length())
                result += ' ';
        }
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