#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    string no_special_chars = "";
    for(char c : tweet) {
        if(!ispunct(c)) no_special_chars += c;
    }
    int length = no_special_chars.length();
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