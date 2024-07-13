int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    tweet.erase(0, 1); // Remove leading newline character
    tweet.pop_back();   // Remove trailing newline character
    cout << validateTweet(tweet) << endl;
    return 0;
}