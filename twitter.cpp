#include <iostream>
#include <string>

using namespace std;

string validateTweet(string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    int count = wctomb(nullptr, 0);
    for (int i = 0; i < tweet.size(); i++) {
        count += wctomb(nullptr, tweet[i]);
        if (count > 140) {
            return "Too many characters";
        }
    }
    return "Your tweet has " + to_string(count) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
}