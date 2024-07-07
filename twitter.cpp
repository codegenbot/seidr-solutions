```#include <sstream>
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
    size_t firstNonSpace = tweet.find_first_not_of(' ');
    if (firstNonSpace != string::npos) {
        tweet.erase(0, firstNonSpace); 
    } else {
        tweet.clear();
    }
    
    size_t lastNonWhiteSpace = tweet.find_last_not_of(" \t\r\n");
    if (lastNonWhiteSpace != string::npos) {
        tweet.erase(lastNonWhiteSpace + 1);
    } else {
        tweet.clear();
    }
    cout << validateTweet(tweet) << endl;
    return 0;
}```