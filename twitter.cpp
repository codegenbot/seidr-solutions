```cpp
#include <iostream>
#include <string>
#include <limits>

using namespace std;

string validateTweet(string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cin.ignore(256, '\n');
    cout << validateTweet(tweet) << endl;
}