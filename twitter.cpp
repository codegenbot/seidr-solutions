#include <iostream>
#include <string>
#include <algorithm>

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
    } else {
        cout << "Your tweet has " << tweet.erase(0, std::find_if(tweet.begin(), tweet.end(),
            [](char c) { return !std::isspace(c); }).base() - tweet.begin()) << " characters" << endl;
    }
    return 0;
}