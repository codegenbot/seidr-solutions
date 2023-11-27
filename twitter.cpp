#include <iostream>
#include <string>
using namespace std;

string validateTweet(string tweet) {
    int length = tweet.length();
    if (length == 0) {
        return "You didn't type anything";
    } else if (length > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + to_string(length) + " characters";
    }
}

int main() {
    string tweet;
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}