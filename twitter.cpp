#include <iostream>
#include <string>
using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (tweet.length() > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + to_string(tweet.length()) + " characters";
    }
}

int main() {
    int testCases;
    cin >> testCases;

    for(int i = 0; i < testCases; i++) {
        string tweet;
        cin >> tweet;
        cout << validateTweet(tweet) << endl;
    }

    return 0;