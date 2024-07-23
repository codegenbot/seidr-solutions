#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 0;
    }
    size_t charCount = 0;
    for (size_t i = 0; i < tweet.length(); i++) {
        if (!isspace(tweet[i])) {
            charCount++;
        }
    }
    if (charCount > 140) {
        cout << "Too many characters" << endl;
        return 0;
    }
    cout << "Your tweet has " << charCount << " characters" << endl;
    return 0;
}