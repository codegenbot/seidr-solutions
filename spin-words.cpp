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
        if (output.substr(i).find(' ') == std::string::npos) {
            break;
        }
        if (i + 4 < output.length()) {
            continue;
        }
        std::string temp = output.substr(i);
        std::reverse(temp.rbegin(), temp.rend());
        output.replace(i, temp.length(), temp);
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