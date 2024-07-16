```cpp
#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    } 
    if (tweet.length() > 140) {
        return "Too many characters";
    } else {
        std::string result = "Your tweet has " + std::to_string(tweet.length()) + " characters";
        return result;
    }
}

int main() {
    std::string tweet;
    std::cout << "Enter your tweet: ";
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}