#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << (tweet.empty() ? "You didn't type anything" : 
              tweet.length() > 140 ? "Too many characters" : 
              "Your tweet has " + to_string(tweet.length()) + " characters");
    return 0;
}