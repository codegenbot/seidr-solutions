```cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) return "You didn't type anything";
    tweet.erase(remove_if(tweet.begin(), tweet.end(), ::isspace), tweet.end(), '' ); 
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}