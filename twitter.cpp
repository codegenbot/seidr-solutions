std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    size_t len = 0;
    for (char c : tweet) {
        ++len;
        if (len > 140) {
            return "Too many characters";
        }
    }
    return "Your tweet has " + std::to_string(len) + " characters";