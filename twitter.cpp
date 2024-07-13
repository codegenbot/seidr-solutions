int main() {
    string tweet;
    getline(cin, tweet);

    int tweet_length = tweet.length();

    if (tweet_length > 140) {
        cout << "Too many characters";
    } else if (tweet_length == 0) {
        cout << "You didn't type anything";
    } else {
        cout << "Your tweet has " << tweet_length << " characters";
    }

    return 0;
}