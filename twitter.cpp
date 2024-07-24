#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);

    if (tweet.size() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else if(tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.size() << " characters" << std::endl;
    }
}