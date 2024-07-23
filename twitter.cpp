#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    cin >> tweet;

    if (tweet == "") {
        cout << "You didn't type anything" << '\n';
        return 1;
    } else if (tweet.size() > 140) {
        cout << "Too many characters" << '\n';
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << '\n';
    }

    return 0;
}