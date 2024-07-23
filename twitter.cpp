```cpp
#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    while (!tweet.empty() && tweet.back() == '\n') {
        tweet.pop_back();
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    int count = tweet.size();
    if (count > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(count) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
}