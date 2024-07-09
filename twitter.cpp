int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    while (tweet.back() == '\n') {
        tweet.pop_back();
    }
    cout << validateTweet(tweet) << endl;
    return 0;
}