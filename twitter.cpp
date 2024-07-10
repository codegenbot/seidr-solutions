```cpp
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
        if(std::getline(std::cin, tweet)) break; 
        else{
            std::cout << "Invalid input. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }   
    std::string output = validateTweet(tweet); 
    std::cout << output << std::endl;
    return 0;
}