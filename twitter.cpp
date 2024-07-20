#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet); 
    
    if (tweet.length() > 140) {
        std::string output = "Too many characters";
        std::cout << output;
    } else if (tweet.empty()) {
        std::string output = "You didn't type anything";
        std::cout << output;
    } else {
        std::string output = "Your tweet has " + std::to_string(tweet.length()) + " characters";
        std::cout << output;
    }
    
    return 0;
}