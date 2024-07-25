#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string validateTweet(string tweet) {
    // Remove whitespace and non-alphanumeric characters
    tweet.erase(remove_if(tweet.begin(), tweet.end(), ::isspace), tweet.end());
    tweet.erase(remove_if(tweet.begin(), tweet.end(), not1(ptr_fun<int, int>(isalnum))), tweet.end());

    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    cout << validateTweet(input) << endl;
    return 0;
}