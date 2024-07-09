```cpp
string validateTweet(string tweet) {
    int charCount = 0;
    for (char c : tweet) {
        ++charCount;
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (charCount > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + to_string(charCount) + " characters";
    }
}