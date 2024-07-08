#include <iostream>
#include <string>

int main() {
    std::string input;
    getline(std::cin, input);

    // Split the input string into words.
    std::vector<std::string> words = splitStringIntoWords(input);

    // Reverse each word that is 5 or more letters long.
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string reversedWord = reverseString(words[i]);
            words[i] = reversedWord;
        }
    }

    // Join the words back together into a single string.
    std::string output = joinWords(words);

    std::cout << output << '\n';

    return 0;
}
