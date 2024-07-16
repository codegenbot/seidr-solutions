#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    tweet.erase(0, tweet.find_first_not_of("\n")); // remove leading whitespace
    
    if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    }
    
    if(tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
}