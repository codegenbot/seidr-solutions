#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.size() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(tweet.size()) + " characters";
}

int main() {
    int numTests;
    std::cin >> numTests;
    for (int i = 0; i < numTests; ++i) {
        std::string tweet;
        std::cin >> tweet;
        std::cout << validateTweet(tweet) << std::endl;
    }
    return 0;
}