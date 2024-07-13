```cpp
#include <sstream>
#include <string>
#include <iostream>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    std::string result = validateTweet(tweet);
    std::cout << result << std::endl;
    return 0;
}

std::string validateTweet(std::string tweet) {
    if (tweet.length() > 140) {
        return "Too many characters";
    } else if (tweet.empty()) {
        return "You didn't type anything";
    } else {
        std::stringstream ss;
        ss << "Your tweet has " << std::to_string(tweet.length()) << " characters";
        if (ss.str().empty()) {
            return "You didn't type anything";
        }
        return ss.str();
    }
}