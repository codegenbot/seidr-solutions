```cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    tweet.erase(std::remove_if(tweet.begin(), tweet.end(), ::isspace), tweet.end());
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