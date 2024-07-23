#include <iostream>
#include <string>

using namespace std;

string validateTweet(string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    string trimmedTweet = tweet;
    while (!trimmedTweet.empty() && trimmedTweet.back() == '\n') {
        trimmedTweet.pop_back();
    }
    int count = static_cast<string::size_type>(trimmedTweet.size());
    if (count > 140) {
        return "Too many characters";
    }
    string result = "Your tweet has " + to_string(count) + " characters";
    return result;
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
}