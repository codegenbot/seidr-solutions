#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::vector<std::string> words;
    int length = 0;

    for (char c : input) {
        if (c == ' ') {
            if (length >= 5)
                for (int i = length - 1; i >= 0; --i)
                    output += word[i];
            else
                output += word;
            word = "";
            length = 0;
        } else {
            word += c;
            length++;
        }
    }

    if (length >= 5) {
        for (int i = length - 1; i >= 0; --i)
            output += word[i];
    } else
        output = word;

    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}