#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (tweet.length() > 0) {
        int length = 0;
        for (char c : tweet) {
            if (!ispunct(c)) {
                length++;
            }
        }
        if (length > 140) {
            return "Too many characters";
        }
        else {
            return "Your tweet has " + to_string(length) + " characters";
        }
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}