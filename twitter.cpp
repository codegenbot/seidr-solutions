#include <iostream>
#include <string>

std::string tweetValidator(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    // Test cases
    std::cout << tweetValidator("") << std::endl;
    std::cout << tweetValidator("1") << std::endl;
    std::cout << tweetValidator("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it") << std::endl;
    std::cout << tweetValidator("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)") << std::endl;
    std::cout << tweetValidator("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1") << std::endl;

    return 0;
}