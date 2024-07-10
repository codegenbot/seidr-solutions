#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::string result = "";
    size_t prev = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            size_t len = i - prev;
            if (len >= 5) {
                std::string temp = str.substr(prev, len);
                std::reverse(temp.begin(), temp.end());
                result += temp;
            } else {
                result += str.substr(prev, len);
            }
            prev = i + 1;
        }
    }
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // should print "a"
    std::cout << spinWords("this is a test") << std::endl; // should print "this is a tset"
    std::cout << spinWords("this is another test") << std::endl; // should print "this is rehtona tset"
    std::cout << spinWords("hi") << std::endl; // should print "hi"
    return 0;
}