```cpp
#include <iostream>
#include <string>

int main() {
    std::string tweet;
    std::cin >> tweet;

    if (!tweet.empty()) {
        if (tweet.length() > 140) {
            std::cout << "Too many characters" << std::endl;
        } else {
            std::string result = "Your tweet has " + std::to_string(tweet.length()) + " characters";
            std::cout << result << std::endl;
        }
    } else {
        std::cout << "You didn't type anything" << std::endl;
    }

    return 0;
}