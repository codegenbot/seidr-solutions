#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (strlen(tweet.c_str()) > 140) return "Too many characters";
    return "Your tweet has " + to_string(strlen(tweet.c_str())) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}