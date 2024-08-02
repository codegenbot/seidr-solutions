```cpp
#include <iostream>
#include <string>
#include <limits>

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
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    for(int i = 0; i < numTests; ++i) {
        std::string tweet;
        std::cin >> std::ws; // Read whitespace characters only
        std::getline(std::cin, tweet);
        std::cout << validateTweet(tweet) << std::endl;
    }

    return 0;
}