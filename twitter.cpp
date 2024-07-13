```c++
#include <sstream>
#include <string>

int main() {
    std::string tweet = "Your tweet here"; // or take input from user
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}

std::string validateTweet(std::string tweet) {
    if (tweet.length() > 140) {
        return "Too many characters";
    } else if (tweet.empty()) {
        return "You didn't type anything";
    } else {
        std::stringstream ss;
        ss << "Your tweet has " << std::to_string(tweet.length()) << " characters";
        return ss.str();
    }
}