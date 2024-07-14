#include <string>
#include <iostream>

std::string validateTweet(std::string tweet) {
    tweet.erase(0, tweet.find_first_not_of(" \t")); // Remove leading/trailing whitespace
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    std::string tweet;
    std::cout << "Enter your tweet: ";
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;

    return 0;
}