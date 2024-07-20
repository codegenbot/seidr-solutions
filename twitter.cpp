```cpp
#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet);
    
    std::cout << (tweet.length() > 140 ? "Too many characters" : tweet.empty() ? "You didn't type anything" : "Your tweet has " << tweet.length() << " characters");
    
    return 0;
}