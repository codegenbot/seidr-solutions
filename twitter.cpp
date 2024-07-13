```cpp
#include <iostream>
#include <sstream>
#include <string>

std::string validateTweet(std::string);

int main() {
    std::cout << "Enter your tweet: ";
    std::string tweet;
    std::cin >> std::getline(std::cin, tweet); // remove spaces and all other characters
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}

std::string validateTweet(std::string tweet) {
    if (tweet.length() > 140) {
        return "Too many characters";
    } else if (tweet.empty()) {
        return "You didn't type anything";
    } else {
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
    }
}