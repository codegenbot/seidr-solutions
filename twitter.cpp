```cpp
#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    
    if (tweet.size() > 140) {
        return "Too many characters";
    } else if (tweet.empty()) {
        return "You didn't type anything";
    } else {
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
    }
}