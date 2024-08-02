#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string input) {
    std::string output = "";
    std::string word;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            output += word + " ";
            word.clear();
        } else {
            word += input[i];
        }
    }

    output += word;

    for (int i = 0; i <= output.length(); i++) {
        if (output[i] == ' ' && i + 1 < output.length() && output.substr(i + 1).length() >= 5) {
            std::string temp = output.substr(i + 1, output.find(' ', i + 1) - i - 1);
            std::reverse(temp.rbegin(), temp.rend());
            output.replace(i + 1, temp.length(), temp);
            i += temp.length() - 1;
        }
    }

    return output;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("a") << std::endl;

    return 0;
}