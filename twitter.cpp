#include <iostream>
#include <string>

int main() {
    std::string tweet;
    int ascii = 0;

    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);

    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else {
        int unicode = tweet.length() - ascii;
        for(auto c : tweet) {
            if(c < 128)
                ascii++;
        }

        if(unicode > 140) 
            std::cout << "Too many characters" << std::endl; 
        else
            std::cout << "Your tweet has " << unicode << " characters" << std::endl;
    }

    return 0;
}