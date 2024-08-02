#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output;
    std::size_t pos = 0;

    while ((pos = input.find(' ')) != std::string::npos) {
        std::size_t length = input.length() - pos - 1;
        if (length >= 5) {
            std::string word = input.substr(pos + 1, length);
            for (int i = word.length() - 1; i >= 0; --i)
                output += word[i];
            output.append(' ');
        } else {
            output.append(input.substr(0, pos + 1));
        }
        input.erase(0, pos + 1);
    }

    if (!input.empty())
        output.append(input);

    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}