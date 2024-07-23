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

    if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
        return 0;
    }

    cout << "Your tweet has " << tweet.length() << " characters" << endl;
    return 0;
}