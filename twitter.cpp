#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string tweet;
    getline(cin, tweet);

    tweet.erase(remove_if(tweet.begin(), tweet.end(), ::isspace), tweet.end()); // Remove whitespaces

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if (tweet.size() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << endl;
    }

    return 0;
}