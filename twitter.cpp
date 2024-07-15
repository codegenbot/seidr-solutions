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
        if (!input.empty()) break; // If there is no space character in the line, we can exit the loop.
        std::cout << "Invalid input. Please enter a string of characters." << std::endl;
    }
    while (true) {
        std::cout << "Enter a tweet: ";
        std::getline(std::cin, input); // Read the rest of the line
        if (!input.empty()) break; // If there is no space character in the line, we can exit the loop.
        std::cout << "Invalid input. Please enter a string of characters." << std::endl;
    }
    std::cout << validateTweet(input) << std::endl;
    return 0;
}