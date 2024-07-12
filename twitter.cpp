#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string tweet;
    cout << "Enter your tweet: ";
    getline(cin, tweet, '\n');

    if (cin.fail()) {
        cout << "Invalid input. Please enter a valid tweet." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if (tweet.size() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << endl;
    }

    return 0;
}