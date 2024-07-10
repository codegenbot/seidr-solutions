```cpp
#include <iostream>
#include <string>
#include <limits>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    while(true) {
        std::string tweet;
        std::cout << "Enter a tweet: ";
        if (!(std::getline(std::cin, tweet))) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break; 
        }
        std::string output = validateTweet(tweet); 
        std::cout << output << std::endl;
    }
    return 0;
}