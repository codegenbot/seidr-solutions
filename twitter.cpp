```cpp
#include <iostream>
#include <string>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::copy(std::istream_iterator<char>(std::cin), std::istream_iterator<char>(), std::back_inserter(tweet));
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}