#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    while(true) {
        int c;
        std::cout << "Enter a tweet: ";
        while ((c = getchar()) != '\n' && c != EOF);
        if (std::cin.fail()) break; 
        std::string tweet;
        if (!(std::getline(std::cin, tweet))) break; 
        std::cout << validateTweet(tweet) << std::endl;
    }
    return 0;
}