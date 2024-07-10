#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::vector<std::string> words;
    std::stringstream ss(input);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        words.push_back(word);
    }

    std::string output;
    for (auto w : words) {
        output += w + " ";
    }
    return output.substr(0, output.size() - 1); // remove trailing space
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}