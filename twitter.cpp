```cpp
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 0;
    }

    int asciiChars = std::count_if(tweet.begin(), tweet.end(), ::isascii);
    
    if (asciiChars > 140) {
        cout << "Too many characters" << endl;
        return 0;
    }
    
    cout << "Your tweet has " << asciiChars << " characters" << endl;
    return 0;