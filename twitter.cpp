```c
#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    if(tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + to_string(tweet.length()-1) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    tweet.erase(tweet.find_last_not_of("\n"), string::npos);
    cout << validateTweet(tweet) << endl;
    return 0;
}