#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    int length = 0;
    for (char c : tweet) {
        if (c > 0x7F) {
            length += 2;
        } else {
            length++;
        }
    }
    if (length > 140) {
        return "Too many characters";
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    return "Your tweet has " + to_string(length) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}