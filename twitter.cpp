#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::getline(std::cin, tweet);

    if (tweet.empty()) {
        std::cout << "You didn't type anything\n";
    } else if (tweet.length() > 140) {
        std::cout << "Too many characters\n";
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters\n";
    }

    return 0;
}