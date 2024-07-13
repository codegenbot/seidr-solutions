int validateTweet(string tweet) {
    if(tweet.empty()) return 0;
    if(tweet.length() > 140) return 1;
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}