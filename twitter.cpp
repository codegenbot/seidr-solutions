```cpp
#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    if (tweet.empty()) {
        std::cout << "You didn't type anything";
        return 0;
    }
    int charCount = 0;
    for (char c : tweet) {
        charCount += std::towupper(c) != EOF ? 1 : 0;
    }
    if (charCount > 140) {
        std::cout << "Too many characters";
        return 0;
    }
    std::cout << "Your tweet has " << charCount << " characters";
    return 0;
}