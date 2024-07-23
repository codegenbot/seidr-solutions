#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string validateTweet(string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    string trimmedTweet = tweet;
    trimmedTweet.erase(std::remove_if(trimmedTweet.begin(), trimmedTweet.end(), ::isspace), trimmedTweet.end());
    int count = static_cast<string::size_type>(trimmedTweet.size());
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