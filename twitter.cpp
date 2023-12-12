#include <iostream>
#include <string>
using namespace std;

string validateTweet(string tweet) {
    int len = tweet.length();
    if (len == 0) {
        return "You didn't type anything";
    }
    else if (len > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + to_string(len) + " characters";
    }
}

int main() {
    string tweet;
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}