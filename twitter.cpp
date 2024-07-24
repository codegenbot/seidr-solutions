#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    size_t nonAlphanumericCount = count_if(tweet.begin(), tweet.end(), [](char c){ return !isalnum(c); });
    cout << (tweet.length() + nonAlphanumericCount > 140 ? "Too many characters" : tweet.empty() ? "You didn't type anything" : "Your tweet has " << tweet.length() << " characters") << endl;
}