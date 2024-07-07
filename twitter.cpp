#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    tweet.erase(0, std::find_first_not_of(" \t", tweet.begin()) - tweet.begin()); // Remove leading whitespace
    tweet.erase(std::find_last_not_of(" \t") - tweet.rbegin(), tweet.npos); // Remove trailing whitespace
    
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
    cout << "Enter a tweet: ";
    cin.ignore(); 
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}