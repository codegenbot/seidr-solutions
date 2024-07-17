int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    validateTweet(tweet);
    
    return 0;
}