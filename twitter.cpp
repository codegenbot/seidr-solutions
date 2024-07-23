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
        int charCount = 0;
        for (int i = 0; i < tweet.length(); i++) {
            if (!isspace(tweet[i])) {
                charCount++;
            }
        }
        if (charCount > 140) {
            cout << "Too many characters. Try to keep it under 140, okay?";
        } else {
            cout << "Your tweet has " << charCount << " characters";
        }
    }
    return 0;
}