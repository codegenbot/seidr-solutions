#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            words[i] = std::string(words[i].rbegin(), words[i].rend());
        }
    }

    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}