#include <iostream>
#include <string>
#include <cmath>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (static_cast<int>(std::wcstombs(nullptr, tweet.c_str(), 0)) > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
    }
}

int main() {
    int numInputs;
    std::cin >> numInputs;

    for (int i = 0; i < numInputs; ++i) {
        std::string tweet;
        std::getline(std::cin, tweet);
        std::cout << validateTweet(tweet) << std::endl;
    }

    return 0;
}