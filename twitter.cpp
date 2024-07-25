```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    tweet.erase(std::remove_if(tweet.begin(), tweet.end(), ::isspace), tweet.end());
    if (tweet.length() > 140) {
        return "Too many characters";
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