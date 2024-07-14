```cpp
#include <string>
#include <iostream>
#include <cstddef>

int main() {
    std::string input;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, input);
    const char* result = validateTweet(input);
    std::cout << result << std::endl;
    return 0;

}

std::string validateTweet(const std::string& input) {
    if (input.empty()) {
        return "You didn't type anything";
    }
    size_t len = input.length();
    return (len <= 140 ? std::string("Your tweet has ") + std::to_string(len) + " characters" : "Too many characters");
}