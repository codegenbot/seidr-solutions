```cpp
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
    std::stringstream ss;
    char c;
    int charCount = 0;

    while ((c = cin.get()) && (charCount <= 140)) {
        if (!isspace(c)) {
            ss.put(c);
            charCount++;
        }
        else if (charCount > 0) {
            break; // newline character indicates end of tweet
        }
    }

    cout << validateTweet(ss.str()) << endl;
    return 0;
}