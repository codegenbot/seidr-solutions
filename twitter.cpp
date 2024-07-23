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

    if (std::count_if(tweet.begin(), tweet.end(), ::isascii) > 140) {
        cout << "Too many characters" << endl;
        return 0;
    }

    cout << "Your tweet has " << std::count_if(tweet.begin(), tweet.end(), ::isascii) << " characters" << endl;
    return 0;