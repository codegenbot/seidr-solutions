```c++
#include <iostream>
#include <string>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a tweet: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "You didn't type anything" << std::endl;
        } else {
            std::cout << validateTweet(input) << std::endl;
        }
    }
    return 0;
}