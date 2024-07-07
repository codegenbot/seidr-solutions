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
    ostringstream ostr;
    ostr << "Your tweet has " << charCount << " characters";
    return ostr.str();
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}