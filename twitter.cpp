#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    getline(cin, tweet);
    tweet.erase(remove(tweet.begin(), tweet.end(), '\n'), tweet.end());

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }

    return 0;
}