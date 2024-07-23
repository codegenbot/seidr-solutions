#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.find_first_not_of(" \t") == string::npos) {
        return "You didn't type anything";
    }
    
    size_t len = 0;
    for (char c : tweet) {
        if (!isspace(c)) {
            ++len;
        }
    }
    if (len > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + to_string(len) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}