#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string validateTweet(string tweet) {
    int count = 0;
    for (char c : tweet) {
        if (isalnum(c)) {
            count++;
        }
    }
    if (tweet.empty()) return "You didn't type anything";
    if (count > 140) return "Too many characters";
    return "Your tweet has " + to_string(count) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}