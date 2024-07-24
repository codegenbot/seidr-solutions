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
            if (!isalnum(c)) continue; // Don't count non-alphanumeric chars
            count++;
        }
        cout << "Too many characters" << endl;
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << std::to_string(count + 1) << " characters" << endl;
    }
}