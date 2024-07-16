```c
#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    size_t len = tweet.length();
    if(len > 140) {
        cout << "Too many characters" << endl;
    } else if(len == 0) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << len << " characters" << endl;
    }
}