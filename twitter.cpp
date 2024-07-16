```cpp
#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter your tweet: ";
    getline(std::cin, tweet); // remove trailing newline
    tweet.erase(tweet.find_last_not_of("\n") + 1);

    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if (tweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }
}