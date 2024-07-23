```cpp
string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    if(tweet.length() > 140) return "Too many characters";
    else return "Your tweet has " + to_string(tweet.length()) + " characters";
}