```cpp
#include <iostream>
#include <string>
#include <regex>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty())
        return "You didn't type anything";
    else if (tweet.length() > 140)
        return "Too many characters";
    else {
        string cleanTweet = tweet;
        regex whitespaceRx(" +"); 
        cleanTweet = regex_replace(cleanTweet, whitespaceRx, " "); 
        int charCount = cleanTweet.length();
        return "Your tweet has " + to_string(charCount) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}