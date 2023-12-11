#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    } else if (tweet.length() > 280) {
        return "Too many characters";
    } else {
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
    }
}

int main() {
    std::string tweet;
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}