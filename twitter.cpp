#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    
    size_t count = 0;
    for (char c : tweet) {
        ++count;
    }
    
    if (count > 140) {
        return "Too many characters";
    }
    
    return "Your tweet has " + std::to_string(count) + " characters";
}

int main() {
    // Test cases
    std::cout << validateTweet("") << std::endl;
    std::cout << validateTweet("1") << std::endl;
    std::cout << validateTweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it") << std::endl;
    std::cout << validateTweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)") << std::endl;
    std::cout << validateTweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1") << std::endl;
    
    return 0;
}