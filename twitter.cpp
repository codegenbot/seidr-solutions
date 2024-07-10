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
    while (!(cin >> ws && cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'))) {
        return "You didn't type anything";
    }
    string tweet = ws + input.substr(0, 140);
    cout << validateTweet(tweet) << endl;
    return 0;
}