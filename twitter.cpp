```c++
#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.size() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.size()) + " characters";
}

int main() {
    while (true) { 
        std::cout << "Enter a tweet: ";
        std::string line;
        getline(std::cin, line);
        if (!std::cin) { 
            return 1; 
        }
        std::string output = validateTweet(line); 
        if(output == "You didn't type anything") {
            std::cout << output << std::endl;
            return 0; 
        }
        std::cout << output << std::endl;
    }   
    return 0;
}