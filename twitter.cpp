```cpp
#include <iostream>
#include <string>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (tweet.length() > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
    }
}

int main() {
    int numTests;
    std::cin >> numTests;

    for(int i = 0; i < numTests; ++i) {
        std::string tweet;
        std::getline(std::cin, tweet); // Use getline instead of cin
        std::cout << validateTweet(tweet) << std::endl;
    }

    return 0;
}