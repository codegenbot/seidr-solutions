#include <sstream>
#include <iostream>
#include <limits>

using namespace std;

string validateTweet(string tweet) {
    int charCount = 0;
    for (char c : tweet) {
        if (!isspace(c)) { 
            charCount++;
        }
    }
    
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (charCount > 140) {
        return "Too many characters";
    }
    string ostr = "Your tweet has " + to_string(charCount) + " characters";
    return ostr;
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, tweet);
    
    int charCount = 0;
    for (char c : tweet) {
        if (!isspace(c)) { 
            charCount++;
        }
    }
    
    cout << validateTweet(tweet) << endl;
    return 0;
}