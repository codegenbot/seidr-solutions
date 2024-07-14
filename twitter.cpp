#include <bits/stdc++.h>

std::string validateTweet(const std::string& input) {
    if (input.empty()) {
        return "You didn't type anything";
    }
    size_t len = input.length();
    if (len > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(len) + " characters";

}

int main() {
    std::string input;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, input);
    const char* result = validateTweet(input).c_str(); 
    std::cout << result << std::endl;
    return 0;

}