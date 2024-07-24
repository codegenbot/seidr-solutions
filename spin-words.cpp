#include <vector>
#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::stringstream ss(str);
    std::string word;
    std::stringstream result;

    while (ss >> word) {
        if (word.length() >= 5)
            for (int i = word.length() - 1; i >= 0; --i)
                result << word[i];
        else
            result << word;
        result << " ";
    }

    return result.str();
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}