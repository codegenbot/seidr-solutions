```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    string result;
    
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if (tweet.empty()) {
        result = "You didn't type anything";
    } else if (tweet.length() > 140) {
        result = "Too many characters";
    } else {
        result = "Your tweet has " + to_string(tweet.length()) + " characters";
    }
    
    cout << result << endl;
    return 0;
}