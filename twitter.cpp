int validateTweet(string tweet) {
    if(tweet.empty()) return 1;
    if(tweet.length() > 140) return 2;
    return tweet.length();
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    int result = validateTweet(tweet);
    switch (result) {
        case 0:
            cout << "You didn't type anything" << endl;
            break;
        case 1:
            cout << "Too many characters" << endl;
            break;
        default:
            cout << "Your tweet has " << result << " characters" << endl;
    }
    return 0;
}