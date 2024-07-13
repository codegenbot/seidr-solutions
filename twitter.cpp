```cpp
#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    tweet.erase(0, tweet.find_first_not_of(" ") ); // Remove leading whitespace
    tweet.erase(tweet.find_last_not_of(" ") + 1); // Remove trailing whitespace

    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (tweet.length() > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + to_string(tweet.length()) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}