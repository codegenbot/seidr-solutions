#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    std::string word;

    for (char c : input) {
        if (c == ' ') {
            output += c;
        } else {
            word += c;
            if (word.length() >= 5 || !input.substr(input.find(c)+1).find(' ")) {
                std::reverse(word.begin(), word.end());
            }
            output += word + " ";
            word.clear();
        }
    }

    return output;
}

int main() {
    // your code here
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << '\n';
    }
    return 0;
}