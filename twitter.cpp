#include <iostream>
#include <sstream>
#include <string>

std::string validateTweet(std::string);

int main() {
    std::string tweet;
    std::cout << "Enter your tweet: ";
    std::string result = validateTweet(tweet);
    std::cout << result << std::endl;
    
    // Ask for a new input here.
    std::cout << "Enter your tweet again: ";
    std::cin.ignore();  // Ignore the newline left in the input buffer
    std::getline(std::cin, tweet);  
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