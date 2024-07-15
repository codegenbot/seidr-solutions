#include <iostream>
#include <string>
#include <regex>

using namespace std;

string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    regex special_chars("[^a-zA-Z0-9\s]");
    string clean_tweet;
    for(auto c : tweet) {
        if(c != char('\t') && !std::regex_match(&c, special_chars)) 
            clean_tweet += c;
    }
    int len = clean_tweet.length();
    if(len > 140) return "Too many characters";
    return "Your tweet has " + to_string(len) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}