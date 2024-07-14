#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

string validateTweet(string tweet) {
    int length = 0;
    wchar_t* wtweet = new wchar_t[tweet.length() + 1];
    mbstowcs(wtweet, &tweet[0], tweet.length());
    wwtweet[wtweet.length()] = L'\0';
    length = wcslen(wwtweet);
    delete[] wtweet;

    if (length > 140) {
        return "Too many characters";
    }
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    return "Your tweet has " + to_string(length) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}