#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::string word = "";
    
    for (char c : input) {
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; --i)
                    output += word[i];
                word = "";
            } else
                output += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; --i)
            output += word[i];
    } else
        output += word;

    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}