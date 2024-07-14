int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet).ignore(); 
    cout << validateTweet(tweet) << endl;
}