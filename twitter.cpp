#include <iostream>
#include <string>
#include <limits>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.size() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.size()) + " characters";
}

int main() {
    std::string tweet;
    while (true) { 
        std::cout << "Enter a tweet: ";
        char c;
        while ((c = std::cin.get()) != '\n') {
            if(c == EOF) break; // Check for end-of-file
        }
        if(std::cin.ignore(numeric_limits<std::streamsize>::max(), '\n').fail()) {
            std::cout << "Invalid input. Please try again." << std::endl;
            std::cin.clear();
        } else break; 
    }   
    std::string output = validateTweet(tweet); 
    std::cout << output << std::endl;
    return 0;
}