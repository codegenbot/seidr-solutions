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
        return 0;
    }
    size_t charCount = 0;
    for (const auto& c : tweet) {
        ++charCount;
    }
    if (charCount > 140) {
        cout << "Too many characters";
        return 0;
    }
    cout << "Your tweet has " << charCount << " characters";
    return 0;
}