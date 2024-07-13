```cpp
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
    return "";