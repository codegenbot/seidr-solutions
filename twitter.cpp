#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter your tweet: ";
    getline(cin, tweet);

    if (tweet.empty()) {
        return cout << "You didn't type anything" << endl, 0;
    }

    if (tweet.length() > 140) {
        return cout << "Too many characters" << endl, 0;
    }

    return cout << "Your tweet has " << tweet.length() << " characters" << endl, 0;
}