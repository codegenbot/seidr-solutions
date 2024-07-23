#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    if (tweet.empty()) {
        cout << "You didn't type anything";
    } else {
        int charCount = tweet.length();
        if (charCount > 140) {
            cout << "Too many characters";
        } else {
            cout << "Your tweet has " << charCount << " characters";
        }
    }
    return 0;
}