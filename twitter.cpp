std::string validateTweet(std::string tweet) {
    auto length = tweet.length();
    if (length > 140) {
        return "Too many characters";
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    return std::string("Your tweet has ") + std::to_string(length) + " characters";