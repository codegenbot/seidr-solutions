int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cin.ignore(); 
    cout << validateTweet(tweet) << endl;
    return 0;
}