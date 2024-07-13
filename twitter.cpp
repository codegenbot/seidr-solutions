#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    int asciiCount = 0;
    for(char c : tweet) {
        if(c <= 126) { 
            asciiCount++;
        }
    }
    if(tweet.empty()) {
        return "You didn't type anything";
    }
    if(asciiCount > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(asciiCount) + " ASCII characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}