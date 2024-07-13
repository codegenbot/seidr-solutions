#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output;
    std::stringstream ss(input);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        output += word + " ";
    }

    return output.substr(0, output.size() - 1); // remove the extra space at the end
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}