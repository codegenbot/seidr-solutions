```cpp
#include <iostream>
#include <string>

int validateTweet(const std::string& tweet) {
    if (tweet.empty()) return 1; 
    else if (tweet.length() > 140) return 2; 
    else return 3; 
}

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    
    int result = validateTweet(tweet);
    switch (result) {
        case 1:
            std::cout << "You didn't type anything";
            break;
        case 2:
            std::cout << "Too many characters";
            break;
        default:
            std::cout << "Your tweet has " << tweet.length() << " characters";
    }
    
    return 0;
}