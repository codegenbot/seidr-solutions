int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    tweet.erase(0, 1); 
    tweet.pop_back();   
    cout << validateTweet(tweet) << endl;
    return 0;
}