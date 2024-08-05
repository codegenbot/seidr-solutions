#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::vector<std::string> words;
    
    // Split the string into words and store in a vector
    size_t start = 0, end;
    while ((end = input.find(' ')) != std::string::npos) {
        words.push_back(input.substr(start, end - start));
        start = end + 1;
    }
    words.push_back(input.substr(start));

    // Reverse the words that are 5 or more letters long
    for (std::string& word : words) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
    }

    // Join the words back into a string and return it
    output = "";
    for (const auto& word : words) {
        output += word + " ";
    }
    return output.substr(0, output.size() - 1);
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}