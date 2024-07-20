```cpp
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
    while(true) {
        cout << "Enter a tweet: ";
        getline(cin, tweet);
        if (tweet.length() <= 140)
            break;
        cout << "Too many characters. Try again.\n";
    }
    cout << validateTweet(tweet) << endl;
    return 0;
}