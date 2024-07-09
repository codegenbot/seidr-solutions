#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::stringstream ss;
    std::string word;

    for (char c : input) {
        if (c == ' ') {
            ss << word;
            ss << ' ';
            word.clear();
        } else {
            word += c;
        }
    }

    ss << word;

    word = "";
    for (std::string w : {ss.str()}) {
        if (w.length() >= 5) {
            std::reverse(w.begin(), w.end());
        }
        if (!word.empty()) {
            word += ' ';
        }
        word += w;
    }

    return word;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    //std::cout << spinWords("Hi") << std::endl;
    //std::cout << spinWords("This is another test") << std::endl;
    return 0;
}