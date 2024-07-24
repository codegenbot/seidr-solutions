```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    char c;
    while ((c = cin.get()) != '\n') {
        if (tweet.length() > 140) {
            cout << "Too many characters" << endl;
            return 0;
        }
        tweet.push_back(c);
    }
    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
}