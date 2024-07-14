```cpp
#include <iostream>
#include <string>

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
    std::string result = validateTweet(input);
    std::cout << result << std::endl;
    return 0;

}