#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::vector<std::string> words;
    std::string word;

    // Split the string into individual words.
    for (char c : input) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    // Reverse each word that has 5 or more letters and join them back together.
    std::string output;
    for (const auto& w : words) {
        if (w.length() >= 5) {
            std::reverse(w.begin(), w.end());
        }
        output += w + " ";
    }

    return output.substr(0, output.length() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}