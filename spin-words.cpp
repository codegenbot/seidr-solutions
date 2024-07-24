#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }

    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::reverse(words[i].begin(), words[i].end());
        }
    }

    std::string result;
    for (const auto& word : words) {
        result += word + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl; // Output: a
    std::cout << spinWords("this is a test") << std::endl; // Output: this is a test
    std::cout << spinWords("this is another test") << std::endl; // Output: this is rehtona test
    std::cout << spinWords("hi") << std::endl; // Output: hi

    return 0;
}