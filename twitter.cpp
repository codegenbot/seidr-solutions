#include <iostream>
#include <string>
#include <regex>

using namespace std;

string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    regex special_chars("[^a-zA-Z0-9 ]");
    string new_tweet = regex_replace(tweet, special_chars, "");
    int length = new_tweet.length();
    if(length > 140) return "Too many characters";
    return "Your tweet has " + to_string(length) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}