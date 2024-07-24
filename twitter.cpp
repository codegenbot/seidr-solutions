#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    tweet.erase(remove(tweet.rbegin(), tweet.rend(), '\n') - tweet.rbegin(), 1);
    if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
}