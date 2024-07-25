#include <iostream>
#include <string>

std::string validateTweet(std::string tweet) {
    size_t len = std::count(tweet.begin(), tweet.end(), '\0');
    if (len > 140) {
        return "Too many characters";
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    return "Your tweet has " + std::to_string(len) + " characters";
}

int main() {
    std::string tweet;
    std::cout << "Enter your tweet: ";
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}