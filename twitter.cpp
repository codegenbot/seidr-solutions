#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    } else if (tweet.length() > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + to_string(tweet.length()) + " characters";
    }
}

int main() {
    string input;
    while (true) {
        cout << "Enter a tweet (or 'q' to quit): ";
        getline(cin, input);
        if (input == "q") {
            break;
        }
        cout << validateTweet(input) << endl;
    }
    return 0;
}