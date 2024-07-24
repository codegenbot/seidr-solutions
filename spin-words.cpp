#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        size_t start = 0;
        size_t end = pos;

        if (end - start >= 5) {
            for (int i = end; i > start; --i) {
                result += str[i];
            }
            result += " ";
        } else {
            result += str.substr(start, end - start) + " ";
        }

        str.erase(0, pos + 1);
    }

    if (str.length() >= 5) {
        for (int i = str.length() - 1; i >= 0; --i) {
            result += str[i];
        }
    } else {
        result += str;
    }

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // output: a
    std::cout << spinWords("this is a test") << std::endl; // output: this is a test
    std::cout << spinWords("this is another test") << std::endl; // output: this is rehtona test
    std::cout << spinWords("hi") << std::endl; // output: hi

    return 0;
}