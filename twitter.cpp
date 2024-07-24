#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);

    size_t pos = 0;
    while ((pos = tweet.find('\n')) != string::npos) {
        tweet.erase(pos, 1);
    }

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 0;
    }

    if (tweet.size() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << endl;
    }
    return 0;
}