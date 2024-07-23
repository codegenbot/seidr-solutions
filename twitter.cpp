#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    getline(cin, tweet);

    if (tweet.empty()) {
        cout << "You didn't type anything" << '\n';
    } else if (tweet.size() > 140) {
        cout << "Too many characters" << '\n';
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << '\n';
    }

    return 0;
}