#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    
    if (tweet.length() > 140) {
        std::cout << "Too many characters";
    } else if (tweet.empty()) {
        std::cout << "You didn't type anything";
    } else {
        int pos = tweet.find('\n');
        if (pos != std::string::npos) { 
            tweet.erase(pos);
        }
        std::cout << "Your tweet has " << tweet.length() << " characters";
    }
    
    return 0;
}