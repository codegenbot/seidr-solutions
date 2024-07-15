#include <iostream>
#include <sstream>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    } else if (tweet.size() > 140) {
        return "Too many characters";
    } else {
        std::stringstream ss;
        ss << "Your tweet has " << tweet.size() << " characters";
        return ss.str();
    }
}