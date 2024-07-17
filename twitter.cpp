```cpp
#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    
    std::getline(std::cin, tweet);
    
    if (tweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }
    
    return 0;
}