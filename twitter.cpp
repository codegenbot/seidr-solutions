```cpp
#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    tweet.erase(tweet.find_last_not_of(" \t")); // Remove trailing whitespace
    tweet.erase(0, tweet.find_first_not_of(" \t")); // Remove leading whitespace
    
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    cin.ignore(); 
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}