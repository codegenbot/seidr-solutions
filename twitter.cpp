#include <iostream>
#include <string>

int main() {
    std::string tweet;
    if(std::getline(std::cin, tweet)) { 
        tweet.erase(0, tweet.find_first_not_of('\n'));
        if(tweet.empty()) {
            std::cout << "You didn't type anything" << std::endl;
        } else if(tweet.length() > 140) {
            std::cout << "Too many characters" << std::endl;
        } else {
            std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
        }
    } else { 
        std::cout << "You didn't type anything" << std::endl;
    }

    return 0;
}