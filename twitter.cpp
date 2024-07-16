#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        tweet.erase(std::remove(tweet.end() - 1, tweet.end(), '\n'), tweet.end());
        
        if(tweet.length() > 140) {
            cout << "Too many characters" << endl;
        } else {
            cout << "Your tweet has " << tweet.length() << " characters" << endl;
        }
    }
}