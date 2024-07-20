```cpp
#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        string errorString = "Too many characters";
        return errorString;
    }
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    cin.ignore(); 
    getline(cin, tweet);
    cout << validateTweet(tweet);
}