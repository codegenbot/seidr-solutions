#include <iostream>
#include <string>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a tweet: ";
        std::cin >> input; // Read the first word, then stop
        if (!input.empty()) break; 
    }
    std::cin.ignore(); // Ignore the newline character left in the input buffer
    std::getline(std::cin, input); // Now read the rest of the line
    std::cout << validateTweet(input) << std::endl;
    return 0;
}