```cpp
#include <string>

int main() {
    std::string tweet = "your_tweet_here"; // or ask the user for input!
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}

std::string validateTweet(std::string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    else if(tweet.length() > 140) return "Too many characters";
    else return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}