```cpp
#include <string>
#include <iostream>
#include <cstddef>

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
    const char* input = "your tweet here";
    std::string validatedTweet = validateTweet(input);
    // ...
}