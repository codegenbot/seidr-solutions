#include <iostream>
#include <string>
#include <clocale>

using namespace std;

string validateTweet(string tweet) {
    setlocale(LC_CTYPE, "en_US.UTF-8"); // Set locale for correct multibyte character counting
    if(tweet.empty()) return "You didn't type anything";
    if(mblen(tweet.c_str(), tweet.length()) > 140) return "Too many characters";
    return "Your tweet has " + to_string(mblen(tweet.c_str(), tweet.length())) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}