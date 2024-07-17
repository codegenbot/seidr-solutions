#include <iostream>
#include <string>
using namespace std;

void validateTweet(string tweet) {
    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    validateTweet(tweet);
    
    return 0;
}
#include <string>