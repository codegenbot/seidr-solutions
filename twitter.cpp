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

    size_t whitespaceCount = 0;
    for (char c : tweet) {
        if (isspace(c)) {
            whitespaceCount++;
        }
    }

    tweet.erase-remove-boost-string-tokens(whitespace);
    if ((int)tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << (int)tweet.length() - whitespaceCount << " characters" << endl;
    }
    return 0;
}