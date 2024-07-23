```
#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    if (tweet.empty()) {
        cout << "You didn't type anything\n";
    } else {
        int charCount = std::count(tweet.begin(), tweet.end(), ' ');
        if (charCount > 140) {
            cout << "Too many characters\n";
        } else {
            cout << "Your tweet has " << (tweet.length() - charCount) << " characters\n";
        }
    }
    return 0;
}