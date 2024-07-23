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
        cout << "You didn't type anything\n";
    } else {
        int charCount = 0;
        for (char c : tweet) {
            if (std::isprint(c)) { 
                charCount++;
            }
        }
        if (charCount > 140) {
            cout << "Too many characters\n";
        } else {
            cout << "Your tweet has " << charCount << " characters\n";
        }
    }
    return 0;
}