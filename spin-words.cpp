```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int start = 0;

    for (int end = 0; end < sentence.size(); ++end) {
        if (end == sentence.size() || sentence[end] == ' ') {
            std::string word = sentence.substr(start, end - start);
            if (word.size() >= 5)
                result += std::string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            start = end + 1;
        }
    }

    return result.substr(0, result.size());
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