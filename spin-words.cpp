Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    size_t start = 0;
    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            std::string word = input.substr(start, i - start);
            if (word.size() >= 5)
                std::reverse(word.begin(), word.end());
            output += word + " ";
            start = i + 1;
        }
    }
    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}