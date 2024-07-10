#include <iostream>
#include <string>
#include <limits>
#include <sstream>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.size() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.size()) + " characters";
}

int main() {
    std::string tweet;
    while (true) { 
        std::cout << "Enter a tweet: ";
        std::getline(std::cin, tweet); // Correct input reading
        break; 
    }   
    std::string output = validateTweet(tweet); 
    std::cout << output << std::endl;
    return 0;
}