#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
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
    int test_cases;
    std::cin >> test_cases;
    
    for(int i = 0; i < test_cases; i++) {
        std::string tweet;
        std::cin >> tweet;
        std::cout << validateTweet(tweet) << std::endl;
    }

    return 0;
}