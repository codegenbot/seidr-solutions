#include <iostream>
#include <string>
#include <cstdint>

std::string validateTweet(const std::string& tweet) {
    uint32_t bytes = static_cast<uint32_t>(tweet.length() * sizeof(char) + 
                                            (tweet.length() > 0 ? 
                                             &(*tweet.begin() == '\0' ? -1 : 2) : 0));
    if (bytes == 0) {
        return "You didn't type anything";
    }
    else if (bytes > 140) {
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