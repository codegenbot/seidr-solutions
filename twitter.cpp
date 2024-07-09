#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    
    int length = tweet.erase(0, find_first_not_of(" \t\r\n", 0) - 0).erase(find_last_not_of(" \t\r\n") + 1).length();
    if (length > 140) {
        return "Too many characters";
    }
    
    return "Your tweet has " + to_string(length) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}