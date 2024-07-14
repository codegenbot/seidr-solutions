string validateTweet(string tweet) {
    auto length = 0u; 
    for (char c : tweet) {
        length++;
    }
    if (length > 140) {
        return "Too many characters";
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    return "Your tweet has " + std::to_string(length) + " characters";
}