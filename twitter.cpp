int main() {
    string tweet;
    getline(cin, tweet);

    int tweetLength = tweet.length();

    if (tweetLength == 0) {
        cout << "You didn't type anything" << endl;
    } else if (tweetLength > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweetLength << " characters" << endl;
    }

    return 0;
}