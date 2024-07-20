```
string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    if (!tweet.empty())
        return "Your tweet has " + to_string(tweet.length()) + " characters";
    else
        return "You didn't type anything";