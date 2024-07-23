```cpp
#include <iostream>
#include <string>

using namespace std;

string validateTweet(string& tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    int count = static_cast<string::size_type>(tweet.size());
    if (count > 140) {
        return "Too many characters";
    }
    string result = "Your tweet has " + to_string(count) + " characters";
    return result;
}

int main() {
    string& tweet; // Change from const to &
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
}