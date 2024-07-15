#include <iostream>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    } else if (tweet.size() > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + std::to_string(tweet.size()) + " characters";
    }
}