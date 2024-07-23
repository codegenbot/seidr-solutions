```cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
        return 0;
    }
    int charCount = 0;
    for (char c : tweet) {
        if(std::isprint(c)) {
            charCount++;
        }
    }
    if (charCount > 140) {
        std::cout << "Too many characters" << std::endl;
        return 0;
    }
    std::cout << "Your tweet has " << std::to_string(charCount) << " characters" << std::endl;
    return 0;
}