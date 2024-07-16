#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if(tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << (tweet.length() <= 140 ? "Your tweet has " : "Too many characters");
        cout << (tweet.length() > 0 ? to_string(tweet.length()) : "0") << " characters" << endl;
    }
}