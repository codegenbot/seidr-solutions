#include <iostream>
#include <cctype>

std::string trimWhitespace(const std::string& str) {
    size_t start = str.find_first_not_of(" \t\n\r");
    return (start == std::string::npos) ? "" : str.substr(start, str.find_last_not_of(" \t\n\r") - start + 1);
}

int main() {
    std::string tweet;
    std::getline(std::cin, tweet);

    std::string trimmedTweet = trimWhitespace(tweet);

    if (trimmedTweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if (trimmedTweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        std::cout << "Your tweet has " << trimmedTweet.length() << " characters" << std::endl;
    }

    return 0;
}