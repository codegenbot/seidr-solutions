#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
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
    getline(cin, tweet);
    auto it = std::remove(tweet.begin(), tweet.end(), ' ');
    tweet.erase(it, tweet.end()); 
    auto it2 = std::remove(tweet.begin(), tweet.end(), '\r');
    tweet.erase(it2, tweet.end());
    cout << validateTweet(tweet) << endl;
    return 0;
}