```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int i = 0;
    while (i < sentence.length()) {
        if (sentence[i] == ' ') {
            i++;
            continue;
        }
        int j = i + 1;
        while (j < sentence.length() && sentence[j] != ' ') {
            j++;
        }
        std::string word(sentence.substr(i, j - i));
        if (word.length() >= 5) {
            result += std::string(word.rbegin(), word.rend()) + " ";
        } else {
            result += word + " ";
        }
        i = j;
    }
    return result.substr(0, result.length());
}

int main() {
    std::string input;
    while (std::cout << "Enter a string: ", std::getline(std::cin, input)) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}