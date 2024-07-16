#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, s);
        cout << validateTweet(s) << endl;
    }
    return 0;
}