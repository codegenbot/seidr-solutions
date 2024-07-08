#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    getline(cin, tweet);

    // Replace newline and carriage return characters with empty strings
    int pos = tweet.find('\n');
    if (pos != -1) {
        tweet.replace(pos, 1, "");
    }
    pos = tweet.find('\r');
    if (pos != -1) {
        tweet.replace(pos, 1, "");
    }

    // Check for length and print output
    if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
        return 1; // Return failure status
    } else if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 2; // Return failure status
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
        return 0; // Return success status
    }
}