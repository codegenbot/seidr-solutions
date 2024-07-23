#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 0;
    }

    int count = 0;
    for (char c : tweet) {
        if (!isspace(c)) {
            count++;
        }
    }

    if (count > 140) {
        cout << "Too many characters" << endl;
        return 0;
    }

    cout << "Your tweet has " << count << " characters" << endl;
    return 0;
}