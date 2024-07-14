#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t wordPos = str.find(" ", pos);
        if (wordPos == std::string::npos)
            wordPos = str.length();
        std::string word = str.substr(pos, wordPos - pos);
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result += word + " ";
        pos = wordPos + 1;
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