#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::vector<std::string> words;
    int start = 0;
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            words.push_back(sentence.substr(start, i - start));
            start = i + 1;
        }
    }

    for (std::string word : words) {
        if (word.length() >= 5)
            word.reverse();
        result += word + " ";
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}