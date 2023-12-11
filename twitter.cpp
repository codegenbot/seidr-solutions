#include <iostream>
#include <string>
#include <cctype>

std::string validateTweet(const std::string& tweet) {
    std::string trimmedTweet = tweet;
    trimmedTweet.erase(trimmedTweet.begin(), std::find_if(trimmedTweet.begin(), trimmedTweet.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));

    trimmedTweet.erase(std::find_if(trimmedTweet.rbegin(), trimmedTweet.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), trimmedTweet.end());

    if (trimmedTweet.empty()) {
        return "You didn't type anything";
    } else if (trimmedTweet.length() > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + std::to_string(trimmedTweet.length()) + " characters";
    }
}

int main() {
    std::string tweet;
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}