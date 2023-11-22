#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    int tweetLength = tweet.length();
    if (tweetLength == 0) {
        return "You didn't type anything";
    } else if (tweetLength > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + std::to_string(tweetLength) + " characters";
    }
}

int main() {
    std::string tweet;
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}