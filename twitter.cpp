```c++
#include <iostream>
#include <string>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    int charCount = 0;
    for (char c : tweet) {
        if (!std::isprint(c)) {
            continue; // skip non-printable character
        }
        ++charCount;
    }
    if (charCount > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(charCount) + " characters";
}

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}