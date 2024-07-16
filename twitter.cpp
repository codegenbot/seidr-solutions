#include <iostream>
#include <string>
#include <algorithm>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    auto noSpecialChars = tweet;
    noSpecialChars.erase(std::remove_if(noSpecialChars.begin(), noSpecialChars.end(),
                                         [](char c){return !isalnum(c);}),noSpecialChars.end());
    if (noSpecialChars.length() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(noSpecialChars.length()) + " characters";
}

int main() {
    int testCases;
    std::cin >> testCases;

    for(int i = 0; i < testCases; i++) {
        std::string tweet;
        std::getline(std::cin, tweet);
        std::cout << validateTweet(tweet) << std::endl;
    }

    return 0;
}