#include <iostream>
#include <string>

void validateTweet(std::string tweet) {
    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if (tweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    validateTweet(tweet);
    
    return 0;
}