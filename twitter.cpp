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
    string input;
    cin >> ws;
    getline(cin, input);
    cout << validateTweet(input) << endl;
    return 0;
}