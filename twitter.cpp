#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.size() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.size()) + " characters";
}

int main() {
    while (true) { 
        std::cout << "Enter a tweet: ";
        std::string line;
        getline(std::cin, line);
        if(line.empty()) {
            std::cout << "You didn't type anything" << std::endl;
            return 0;
        }
        std::string output = validateTweet(line); 
        std::cout << output << std::endl;
    }   
    return 0;
}