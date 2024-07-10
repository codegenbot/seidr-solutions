#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t nextPos = str.find(" ", pos + 1);
        if (nextPos == std::string::npos) {
            nextPos = str.length();
        }
        std::string word = str.substr(pos, nextPos - pos);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
        pos = nextPos;
    }
    return result;
}

int main() {
    // You can test your function here
    std::cout << spinWords("a") << std::endl; // Should print: a
    std::cout << spinWords("this is a test") << std::endl; // Should print: this is a test
    std::cout << spinWords("this is another test") << std::endl; // Should print: this is rehtona test
    std::cout << spinWords("hi") << std::endl; // Should print: hi
    return 0;
}