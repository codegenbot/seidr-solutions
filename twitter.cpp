#include <string>
#include <iostream>
#include <sstream>

std::string validateTweet(const std::string& input) {
    if (input.empty()) {
        return "You didn't type anything";
    }
    size_t len = input.size();
    if (len > 140) {
        return "Too many characters";
    }
    std::stringstream ss;
    ss << "Your tweet has " << len << " characters";
    return ss.str();
}

int main() {
    return 0;
}