#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::vector<std::string> words;
    size_t pos = 0;
    while ((pos = input.find(' ')) != std::string::npos) {
        words.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    words.push_back(input);

    for (size_t i = 0; i < words.size(); ++i) {
        if (words[i].length() >= 5)
            std::reverse(words[i].begin(), words[i].end());
    }

    std::string output;
    for (const auto& word : words)
        output += word + " ";
    return output.substr(0, output.length() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl; // should print a
    std::cout << spinWords("this is a test") << std::endl; // should print this is a test
    std::cout << spinWords("this is another test") << std::endl; // should print this is rehtona test
    std::cout << spinWords("hi") << std::endl; // should print hi

    return 0;
}