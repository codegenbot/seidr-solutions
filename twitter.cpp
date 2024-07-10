#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    }
    
    else if(count(tweet.begin(), tweet.end(), ' ') + count(tweet.begin(), tweet.end(), '!') + count(tweet.begin(), tweet.end(), '#') > 140) {
        cout << "Too many characters" << endl;
    }
    
    else {
        cout << "Your tweet has " << (count(tweet.begin(), tweet.end(), ' ') + count(tweet.begin(), tweet.end(), '!') + count(tweet.begin(), tweet.end(), '#')) << " characters" << endl;
    }
}