#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            size_t len = i - start;
            if (len >= 5) {
                std::string word = str.substr(start, len);
                std::reverse(word.begin(), word.end());
                result += word + " ";
            } else {
                result += str.substr(start, len) + " ";
            }
            start = i + 1;
        }
    }
    return result;
}

int main() {
    // your test cases here
    std::cout << spinWords("a") << std::endl; // should print "a"
    std::cout << spinWords("this is a test") << std::endl; // should print "this is a test"
    std::cout << spinWords("this is another test") << std::endl; // should print "this is rehtona test"
    std::cout << spinWords("hi") << std::endl; // should print "hi"
    return 0;
}