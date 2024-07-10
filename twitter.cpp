#include<iostream>
#include<string>
#include<algorithm>

int main() {
    std::string tweet;
    getline(std::cin, tweet);
    tweet.erase(remove_if(tweet.begin(), tweet.end(), ::isspace), tweet.end());

    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if (tweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }

    return 0;
}