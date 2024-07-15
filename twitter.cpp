#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    int count = 0;
    for (char c : tweet) {
        if (!iswspace(c)) { // Check if the character is a space
            count++;
        }
    }
    if(count > 140) return "Too many characters";
    return "Your tweet has " + to_string(count) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}