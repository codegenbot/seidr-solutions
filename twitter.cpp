#include <iostream>
#include <string>
#include <sstream>

using namespace std;

wstring validateTweet(wstring tweet) {
    if (tweet.empty()) {
        return L"You didn't type anything";
    }
    if (tweet.length() >= 140) {
        return L"Too many characters";
    }
    return L"Your tweet has " + to_wstring(tweet.size()) + L" characters";
}

int main() {
    wstring tweet;
    wcout << L"Enter a tweet: ";
    getline(wcin, tweet);
    wcout << validateTweet(tweet) << endl;
    return 0;