```cpp
void validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    } else if (tweet.length() > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    cout << validateTweet(tweet) << endl;
    
    return 0;
}