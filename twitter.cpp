#include <string>

std::string validateTweet(std::string tweet) {
    std::string::size_type len = 0;
    for (char c : tweet) {
        ++len;
        if (c != ' ') { 
            if (len > 140) {
                return "Too many characters";
            }
        }
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    return "Your tweet has " + std::to_string(len) + " characters";
}