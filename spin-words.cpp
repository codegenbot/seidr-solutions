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
            int start = i + 1;
            while (i < output.length() && output[i] != ' ') {
                i++;
            }
            std::string temp = output.substr(start, i - start);
            std::reverse(temp.rbegin(), temp.rend());
            output.replace(start, i - start, temp);
            i--;
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