#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (int length = 0; tweet.length() > 140) {
        for (char c : tweet) {
            if (!ispunct(c)) {
                length++;
            }
        }
        return "Too many characters";
    }
    else {
        return "Your tweet has " + to_string(length) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}