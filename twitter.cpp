```cpp
#include <iostream>
#include <string>

using namespace std;

string validateTweet(const string& tweet) {
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
    while (getline(cin, tweet) && tweet.back() != '\n') {
        cout << "Invalid input. Please enter again: ";
    }
    cout << validateTweet(tweet) << endl;
}