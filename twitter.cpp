string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    int charCount = 0;
    for (char c : tweet) {
        if (!isspace(c)) { 
            charCount++;
        }
    }
    
    if (charCount > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + std::to_string(charCount) + " characters";
}