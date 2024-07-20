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
        std::cout << "Your tweet has " << (tweet.find('\n') != std::string::npos ? tweet.length() : tweet.erase(tweet.find('\n')).length()) << " characters";
    }
    
    return 0;
}