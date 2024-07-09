```
#include <string>
#include <iostream>
using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    } else if (tweet.size() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(tweet.size()) + " characters";
}

int main() {
    string tweet;
    cin >> tweet;
    cout << validateTweet(tweet) << endl;
    return 0;
}