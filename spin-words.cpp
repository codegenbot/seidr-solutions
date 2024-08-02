```c++
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
        if (output.substr(i).find(' ') != std::string::npos) {
            int spaceIndex = output.find(' ');
            std::string temp = output.substr(0, spaceIndex);
            if (temp.length() >= 5) {
                std::string wordToReverse = temp;
                std::reverse(wordToReverse.rbegin(), wordToReverse.rend());
                output.replace(0, spaceIndex + 1, wordToReverse);
            }
            i = spaceIndex;
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