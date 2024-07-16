#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    std::string::size_type size = 0;
    for (char c : tweet) {
        ++size;
    }
    
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    
    if (size > 140) {
        return "Too many characters";
    }
    
    return "Your tweet has " + std::to_string(size) + " characters";
}

int main() {
    std::cout << validateTweet("") << std::endl;
    std::cout << validateTweet("1") << std::endl;
    std::cout << validateTweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it") << std::endl;
    std::cout << validateTweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)") << std::endl;
    std::cout << validateTweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1") << std::endl;
    
    return 0;
}