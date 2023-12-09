#include <iostream>
#include <string>
using namespace std;

string validateTweet(string tweet) {
    int tweetLength = tweet.length();
    if (tweetLength == 0) {
        return "You didn't type anything";
    } else if (tweetLength > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + to_string(tweetLength) + " characters";
    }
}

int main() {
    string tweet;
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}