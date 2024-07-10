#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

int main() {
    std::string tweet;
    std::getline(std::cin, tweet);

    tweet.erase(0, tweet.find_first_not_of(" \t\n\r")); // Trim leading whitespace
    tweet.erase(tweet.find_last_not_of(" \t\n\r") + 1); // Trim trailing whitespace

    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if (tweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }

    return 0;
}