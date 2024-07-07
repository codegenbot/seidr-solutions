#include <iostream>
#include <string>
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
    return "Your tweet has " + to_string(charCount) + " characters";
}

int main() {
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    string result = validateTweet(input);
    cout << result << endl;
    return 0;
}