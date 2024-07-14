#include <string>
#include <iostream>
#include <boost/lexical_cast.hpp>

std::string validateTweet(const std::string& input) {
    if (input.empty()) {
        return "You didn't type anything";
    }
    size_t len = input.size();
    if (len > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + boost::lexical_cast<std::string>(len) + " characters";
}

int main() {
    return 0;
}