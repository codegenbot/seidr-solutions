```cpp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string reverseWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    if (!result.empty()) {
        result.pop_back(); // remove the extra space at the end
    }

    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string reversedSentence = reverseWords(sentence);
    std::cout << reversedSentence << std::endl;

    return 0;
}
```