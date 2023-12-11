```cpp
#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    std::string trimmedTweet = tweet;
    trimmedTweet.erase(0, trimmedTweet.find_first_not_of(" \t\n\r\f\v"));
    trimmedTweet.erase(trimmedTweet.find_last_not_of(" \t\n\r\f\v") + 1);

    if (trimmedTweet.empty()) {
        return "You didn't type anything";
    } else if (trimmedTweet.length() > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + std::to_string(trimmedTweet.length()) + " characters";
    }
}

int main() {
    std::string tweet;
    std::getline(std::cin, tweet);
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}
```