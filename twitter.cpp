#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    getline(cin, tweet);

    if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
        return 0;
    } else if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 0;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
        return 0;
    }
}