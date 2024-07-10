#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return std::to_string(tweet.length()) + " characters";
}

int main() {
    while (true) { 
        std::cout << "Enter a tweet: ";
        std::string line;
        getline(std::cin, line);
        std::cout << validateTweet(line) << std::endl;   
    }   
    return 0;
}