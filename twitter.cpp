#include <iostream>
#include <string>
#include <clocale>

using namespace std;

string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    if(mblen(tweet.c_str(), tweet.length()) > 140) return "Too many characters";
    return "Your tweet has " + to_string(mblen(tweet.c_str(), tweet.length())) + " characters";
}

int main() {
    setlocale(LC_CTYPE, "");
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}