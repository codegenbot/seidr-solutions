#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    string asciiTweet = "";
    for (char c : tweet) {
        if (isascii(c)) {
            asciiTweet += c;
        }
    }
    if (asciiTweet.length() >= 141) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(asciiTweet.length()) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}