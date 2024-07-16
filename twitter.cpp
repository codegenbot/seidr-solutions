#include <iostream>
#include <string>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.size() > 140) {
        return "Too many characters";
    }
    std::string result = "Your tweet has " + std::to_string(tweet.size()) + " characters";
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, input);
    std::string result = validateTweet(input);
    std::cout << result << std::endl;
    return 0;
}