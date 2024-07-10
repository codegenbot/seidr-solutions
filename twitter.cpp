#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    // Remove leading and trailing whitespace
    tweet.erase(0, std::distance(tweet.begin(), std::find_if(tweet.begin(), tweet.end(), [](int x){return !isspace(x);})));
    tweet.erase(std::find_if(tweet.rbegin(), tweet.rend(), [](int x){return !isspace(x);}).base(), tweet.end());

    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    cout << validateTweet(input) << endl;
    return 0;
}