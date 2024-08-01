#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::getline(std::cin, tweet);

    int tweetLength = tweet.length();

    if (tweetLength > 140) {
        std::cout << "Too many characters\n";
    } else if (tweetLength == 0) {
        std::cout << "You didn't type anything\n";
    } else {
        std::cout << "Your tweet has " << tweetLength << " characters\n";
    }

    return 0;
}