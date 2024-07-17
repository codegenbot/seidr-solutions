#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    int nonSpaceChars = 0;
    for(int i=0; i < tweet.length(); i++) {
        if(tweet[i] != ' ') {
            nonSpaceChars++;
        }
    }
    if(nonSpaceChars > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(nonSpaceChars) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}