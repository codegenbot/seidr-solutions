#include <iostream>
#include <string>

using namespace std;

bool isPrintable(char c) {
    return isprint(c);
}

string validateTweet(string& tweet) {
    int count = 0;
    for (char c : tweet) {
        if (isPrintable(c)) {
            ++count;
        }
    }
    if (count > 140) {
        return "Too many characters";
    } else if (tweet.empty()) {
        return "You didn't type anything";
    } else {
        return "Your tweet has " + to_string(count) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
}