#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int start = 0;
    for (int end = 0; end <= sentence.length(); end++) {
        if (end == sentence.length() || sentence[end] == ' ') {
            string word = sentence.substr(start, end - start);
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            start = end + 1;
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cout << "Enter a sentence: ", std::getline(std::cin, input)) {
        std::cout << spinWords(input) << "\n";
    }
    return 0;
}