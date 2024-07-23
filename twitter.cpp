```cpp
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    if (tweet.empty()) {
        cout << "You didn't type anything";
    } else {
        int asciiCount = 0;
        for (char c : tweet) {
            if (isascii(c))
                asciiCount++;
        }

        int nonAsciiCount = tweet.length() - asciiCount;

        if (nonAsciiCount > 140)
            cout << "Too many characters";
        else
            cout << "Your tweet has " << asciiCount + nonAsciiCount << " characters";
    }
    return 0;
}