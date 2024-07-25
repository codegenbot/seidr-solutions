```c++
#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    
    if(tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if(tweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        tweet.erase(0, tweet.find_first_not_of(" \t\n")); // remove leading whitespace
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }
    
    return 0;
}