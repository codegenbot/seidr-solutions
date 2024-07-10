```c++
#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return std::to_string(tweet.length()) + " characters";
}

int main() {
    while (true) { 
        std::cout << "Enter a tweet: ";
        std::string line;
        getline(std::cin, line);
        std::string output = validateTweet(line); 
        if(output == "You didn't type anything") {
            std::cout << output << std::endl;
            return 0; 
        }
        std::cout << output << std::endl;
    }   
    return 0;
}