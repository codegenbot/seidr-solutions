#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    while(true) {
        std::string tweet;
        std::cout << "Enter a tweet: ";
        if (!(std::getline(std::cin, tweet))) {
            if (std::cin.fail()) { 
                std::cin.clear();
                std::cin.ignore(32767, '\n'); 
                std::cout << "Error: Please try again." << std::endl;
            } else {
                break; 
            }
        }
        std::cout << validateTweet(tweet) << std::endl;
    }
    return 0;
}