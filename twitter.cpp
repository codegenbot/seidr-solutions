#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    cin >> ws; 
    getline(cin, tweet);
    tweet = tweet.substr(0, tweet.find_last_not_of("\n\r")); 

    if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << endl;
    }
}