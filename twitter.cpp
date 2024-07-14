#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    int len = 0;
    for(int i=0; i<tweet.length(); i++){
        len += 1; // ASCII characters are single-byte
        if(tweet[i] > 0x7F) { // non-ASCII character, consider as two bytes
            len++;
        }
    }
    if (len >= 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(len) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}