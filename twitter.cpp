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
    std::string tweet;
    while (!(std::getline(std::cin, tweet) && !tweet.empty())) { 
        if (std::cin.fail()) { 
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cout << "Enter a tweet: ";
    }
    std::string output = validateTweet(tweet); 
    std::cout << output << std::endl;
    return 0;
}