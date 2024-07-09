```cpp
#include <iostream>
#include <string>
#include <sstream>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    std::ostringstream oss;
    oss << "Your tweet has " << tweet.length() << " characters";
    return oss.str();
}

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}