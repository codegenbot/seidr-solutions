#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = " ";
    int wordLength = 0;

    for (char c : sentence) {
        if (c == ' ') {
            if (wordLength >= 5)
                for (int i = wordLength - 1; i >= 0; --i)
                    result += sentence[sentence.find(c) - i - 1];
            else
                result += c;
            result += " ";
            wordLength = 0;
        } else {
            wordLength++;
            result += c;
        }
    }

    if (wordLength >= 5)
        for (int i = wordLength - 1; i >= 0; --i)
            result += sentence[sentence.find(result.back()) - i - 1];
    return result.substr(1);
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words, or 'q' to quit: ";
        std::getline(std::cin, input);
        if (input == "q")
            break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}