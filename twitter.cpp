#include <iostream>
#include <string>
#include <algorithm>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    size_t count = std::count_if(tweet.begin(), tweet.end(), ::isprint);
    if (count > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(count) + " characters";
}

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}