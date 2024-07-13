```cpp
#include <string>
#include <iostream>

int main() {
    std::string tweet;
    // ask for input here or hardcode it
    // for simplicity I'm just hardcoding an example
    tweet = "Hello World";
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}

std::string validateTweet(std::string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    else if(tweet.length() > 140) return "Too many characters";
    else return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}