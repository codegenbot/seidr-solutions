#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (tweet.length() > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + to_string(tweet.length()) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    cin >> tweet; // Remove newline character
    //cin.ignore();  // If you need to handle whitespace characters as well
    cout << validateTweet(tweet) << endl;
    return 0;
}