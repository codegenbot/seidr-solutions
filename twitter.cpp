#include <iostream>
using namespace std;

int main() {
    string validateTweet(string tweet) {
        if(tweet.empty()) return "You didn't type anything";
        else if(tweet.length() > 140) return "Too many characters";
        else return "Your tweet has " + to_string(tweet.length()) + " characters";
    }
    string input;
    cout << "Enter your tweet: ";
    getline(cin, input);
    string result = validateTweet(input);
    cout << result << endl;
    return 0;
}