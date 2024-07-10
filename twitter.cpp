```c++
#include <string>
#include <iostream>

std::string validateTweet(const std::string& line) {
    if(line.empty()) {
        return "You didn't type anything";
    }
    if(line.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(line.length()) + " characters";
}

int main() {
    while (true) { 
        std::cout << "Enter a tweet: ";
        std::string line;
        getline(std::cin, line);
        std::string output = validateTweet(line); 
        if(output == "Too many characters") break;   
        std::cout << output << std::endl;  
    }   
    return 0;
}