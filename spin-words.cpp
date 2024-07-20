#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output;
    std::string word;

    for (char c : input) {
        if (c == ' ') {
            output += c;
            word = "";
        } else {
            word += c;
            if (word.length() >= 5) {
                word = std::string(word.rbegin(), word.rend());
            }
            output += word + " ";
        }
    }

    return output.substr(0, output.size()-1);
}

int main() {
    std::cout << spinWords("a") << std::endl; // Output: a
    std::cout << spinWords("this is a test") << std::endl; // Output: this is a test
    std::cout << spinWords("this is another test") << std::endl; // Output: this is rehtona test
    std::cout << spinWords("hi") << std::endl; // Output: hi

    return 0;
}