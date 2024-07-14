#include <iostream>
#include <string>
#include <iterator>

using namespace std;

string validateTweet(wstring tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (std::distance(tweet.begin(), tweet.end()) > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(std::distance(tweet.begin(), tweet.end())) + " characters";
}

int main() {
    wstring tweet;
    cout << "Enter a tweet: ";
    getline(wcin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}