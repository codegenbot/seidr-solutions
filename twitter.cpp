#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    getline(cin, tweet);

    int tweetLength = tweet.length();

    if (tweetLength == 0) {
        cout << "You didn't type anything" << "\n";
    } else if (tweetLength > 140) {
        cout << "Too many characters" << "\n";
    } else {
        cout << "Your tweet has " << tweetLength << " characters" << "\n";
    }

    return 0;
}