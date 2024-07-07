#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    getline(cin, tweet);

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