#include <iostream>
#include <algorithm>
#include <string>

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
        if (output.substr(i).find(' ') == std::string::npos || output.substr(i).length() >= 5) {
            size_t pos = output.find_last_of(' ');
            if (i != pos) {
                std::string temp = output.substr(pos + 1);
                std::reverse(temp.begin(), temp.end());
                output.replace(pos, temp.length(), temp);
            }
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