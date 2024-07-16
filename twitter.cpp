std::string tweet;
std::cin >> tweet;

if (!tweet.empty()) {
    if (tweet.length() > 140) {
        return "Too many characters";
    } else {
        std::string result = "Your tweet has " + std::to_string(tweet.length()) + " characters";
        return result;
    }
} else {
    return "You didn't type anything";
}