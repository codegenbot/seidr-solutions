```cpp
#include <iostream>
#include <string>
#include <regex>

using namespace std;

string validateTweet(const string& tweet) {
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
    string result = validateTweet(regex_replace(input, regex("^\\s+"), ""));
    cout << result << endl;
    return 0;
}