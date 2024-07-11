```
string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    if(tweet.length() > 280) return "Too many characters";
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}