#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    if (tweet.length() > 140) {
        int count = 0;
        for (char c : tweet) {
            if (!isalnum(c)) {
                count++;
            }
        }
        if (count + tweet.length() - count > 140) {
            cout << "Too many characters" << endl;
        } else {
            cout << "Your tweet has " << tweet.length() << " characters" << endl;
        }
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
}