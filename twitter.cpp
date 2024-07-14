```cpp
#include <string>
#include <iostream>

std::string validateTweet(const std::string& input) {
    if (input.empty()) {
        return "You didn't type anything";
    }
    size_t len = static_cast<size_t>(input.length());
    if (len > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(input.length()) + " characters";
}

int main() {
    return 0;
}