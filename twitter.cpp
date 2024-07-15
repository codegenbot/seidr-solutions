```cpp
#include <iostream>
#include <string>

using namespace std;

const int MAX_CHARS = 140;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    
    if (tweet.length() > MAX_CHARS) {
        return "Too many characters";
    }
    
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}