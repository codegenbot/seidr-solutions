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
    int test_cases;
    std::cin >> test_cases;
    
    for(int i = 0; i < test_cases; ++i){
        std::string input;
        std::getline(std::cin, input);
        std::cout << validateTweet(input) << std::endl;
    }
    
    return 0;
}