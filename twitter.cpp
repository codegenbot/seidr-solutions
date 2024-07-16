#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if ((int)tweet.size() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << (int)tweet.size() << " characters" << endl;
    }
    
    return 0;
}