#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::string word;

    // Split string into words
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            words.push_back(word);
            word.clear();
        } else {
            word += str[i];
        }
    }

    // Join words back into string
    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += " ";
        }
        result += words[i];
    }

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}