#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    if(tweet.length()==0)
        return "Your tweet has 0 characters"; 
    else
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    while(true) {
        std::string tweet;
        std::cout << "Enter a tweet: ";
        if (!(std::getline(std::cin, tweet))) break; 
        std::cout << validateTweet(tweet) << std::endl;
    }
    return 0;
}