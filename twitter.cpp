#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string input;
    while (true) {
        cout << "Enter a tweet: ";
        if (!(cin >> ws).fail()) break;  
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(cin, input);
        cout << validateTweet(input) << endl;
    }
    return 0;
}