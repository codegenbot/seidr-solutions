#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);

    int ascii = 0;
    for(auto c : tweet) {
        if(c < 128)
            ascii++;
    }
    int unicode = tweet.length() - ascii;

    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if (unicode > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }

    return 0;
}