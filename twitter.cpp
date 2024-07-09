#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter your tweet: ";
    std::getline(std::cin, tweet);

    if(tweet.empty()) {
        return std::cout << "You didn't type anything" << std::endl, 0;
    }

    if(tweet.length() > 140) {
        return std::cout << "Too many characters" << std::endl, 0;
    }

    return std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl, 0;
}