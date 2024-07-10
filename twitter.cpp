#include <iostream>
#include <string>

using namespace std;

string validateTweet(int length) {
    if (length > 140) {
        return "Too many characters";
    }
    else if (length == 0) {
        return "You didn't type anything";
    }
    else {
        return "Your tweet has " + to_string(length) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet.length()) << endl;
    return 0;
}