```
int main() {
    string tweet;
    cout << "Tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}