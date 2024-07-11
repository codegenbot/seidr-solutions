#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; ++i) {
        std::string tweet;
        std::cin >> tweet;
        std::cout << validateTweet(tweet) << std::endl;
    }

    return 0;
}