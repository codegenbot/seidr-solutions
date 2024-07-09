```c++
#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.size() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(tweet.size()) + " characters";
}

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    std::string result = validateTweet(tweet);
    std::cout << result << std::endl;
    return 0;
}