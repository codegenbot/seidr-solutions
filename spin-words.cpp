#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordLength;
    bool inWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordLength = 0;
        } else {
            wordLength++;
        }

        if (inWord && wordLength >= 5) {
            for (int i = wordLength - 1; i >= 0; --i)
                result += sentence[sentence.find(c) + i];
        } else
            result += c;

    }

    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words, or 'q' to quit: ";
        std::cin >> input;
        if (input == "q")
            break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}