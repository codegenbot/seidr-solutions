```cpp
#include <iostream>
using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if(tweet.empty()) 
        cout << "You didn't type anything";
    else if(tweet.length() > 140) 
        cout << "Too many characters";
    else
        cout << "Your tweet has " << to_string(tweet.length()) << " characters";