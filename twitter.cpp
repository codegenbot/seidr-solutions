#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    int charCount = 0;
    for (char c : tweet) {
        if (isalnum(c) || c == ' ') {
            charCount++;
        }
    }
    if (charCount > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << charCount << " characters" << endl;
    }
}