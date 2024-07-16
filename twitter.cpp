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
        if (tweet.find_first_not_of(' ') == string::npos) {
            cout << "You didn't type anything" << endl;
        } else {
            cout << "Your tweet has " << tweet.length() << " characters" << endl;
        }
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
}