#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    std::string input;
    getline(std::cin, input);

    // Split the input string into words.
    std::vector<std::string> words;
    for (const auto& c : input) {
        if (c == ' ') {
            std::string reversedWord = word;
            std::reverse(reversedWord.begin(), reversedWord.end());
            words.push_back(reversedWord);
        } else {
            word += c;
        }
    }

    // Join the words back together into a single string.
    std::string output = join(words, ' ');

    std::cout << output << '\n';

    return 0;
}
```