int main() {
    string tweet;
    getline(cin, tweet);

    int tweetLength = tweet.length();

    if (tweetLength == 0) {
        cout << "You didn't type anything";
    } else if (tweetLength > 140) {
        cout << "Too many characters";
    } else {
        cout << "Your tweet has " << tweetLength << " characters";
    }

    return 0;
}