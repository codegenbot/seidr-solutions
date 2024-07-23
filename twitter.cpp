string validateTweet(string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    int count = 0;
    for (char c : tweet) {
        if (iscntrl(c)) { 
            continue; 
        }
        ++count;
    }
    if (count > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(count) + " characters";
}