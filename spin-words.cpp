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

std::vector<std::string> splitStringIntoWords(const std::string& str) {
    std::vector<std::string> words;

    // Find the starting position of each word.
    size_t startPos = 0;
    while (startPos != std::string::npos) {
        // Find the ending position of the current word.
        size_t endPos = str.find(' ', startPos);
        if (endPos == std::string::npos) {
            break;
        }

        // Extract the word and add it to the vector.
        words.push_back(str.substr(startPos, endPos - startPos));

        // Update the starting position for the next word.
        startPos = endPos + 1;
    }

    return words;
}

std::string reverseString(const std::string& str) {
    std::string reversedStr;

    // Iterate over the characters of the input string in reverse order.
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    return reversedStr;
}

std::string joinWords(const std::vector<std::string>& words) {
    std::string joinedString;

    // Iterate over the vector of words and concatenate them with spaces between them.
    for (int i = 0; i < words.size(); i++) {
        joinedString += words[i];
        if (i != words.size() - 1) {
            joinedString += " ";
        }
    }

    return joinedString;
}