#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cin >> tweet;

    if (tweet.length() > 140) {
        cout << "Too many characters";
    } else if (tweet.empty()) {
        cout << "You didn't type anything";
    } else {
        cout << "Your tweet has " << tweet.length() << " characters";
    }

    return 0;
}