#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    } else if (tweet.size() > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + std::to_string(tweet.size()) + " characters";
    }
}

int main() {
    std::string tweet;
    // Read input from user
    std::getline(std::cin, tweet);
    // Process the tweet here if needed
    std::cout << validateTweet(tweet) << std::endl;  
    return 0;
}