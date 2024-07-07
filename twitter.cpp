#include <iostream>
#include <string>
using namespace std;
int main() {
    string tweet;
    getline(cin, tweet);
    int len = tweet.length();
    if (len == 0) {
        cout << "You didn't type anything";
    } else if (len > 140) {
        cout << "Too many characters";
    } else {
        cout << "Your tweet has " << len << " characters";
    }
}