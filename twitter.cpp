#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.size() > 140) {
        return "Too many characters";
    }
    string result = "Your tweet has " + to_string(tweet.size()) + " characters";
    return result;
}

int main() {
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    string result = validateTweet(input);
    cout << result << endl;
    return 0;