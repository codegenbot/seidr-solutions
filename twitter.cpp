#include <iostream>
#include <string>

int main() {
    using namespace std;

    string tweet;
    getline(cin, tweet);

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }

    return 0;
}