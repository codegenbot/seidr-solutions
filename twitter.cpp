#include <iostream>
#include <string>

int main() {
    std::cout << "Enter your tweet: ";
    std::string tweet(std::cin.rdbuf()->in_buffer());
    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if (tweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }
}