#include <iostream>
#include <string>
#include <cctype>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (std::cout.fill('\0').write(&tweet[0], 1, tweet.length()).failg()) {
        int byteCount = std::cout.tellp();
        if (byteCount > 140) {
            return "Too many characters";
        }
        else {
            return "Your tweet has " + std::to_string(tweet.length()) + " characters";
        }
    }
    else {
        return "Too many characters";
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