#include <string>
#include <iostream>

std::string validateTweet(const std::string& input) {
    if (input.empty()) {
        return "You didn't type anything";
    }
    size_t len = input.size();
    if (len > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(len) + " characters";
}