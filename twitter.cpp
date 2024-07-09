string validateTweet(string tweet) {
    int len = tweet.length();
    if (len > 140) {
        return "Too many characters";
    } else if(len == 0) {
        return "You didn't type anything";
    } else {
        return "Your tweet has " + to_string(len) + " characters";
    }
}