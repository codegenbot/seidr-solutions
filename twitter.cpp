#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string validateTweet(const char* tweet) {
    if (tweet == nullptr || strlen(tweet) == 0) {
        return "You didn't type anything";
    }
    if (strlen(tweet) > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(strlen(tweet)) + " characters";
}

int main() {
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    string result = validateTweet(input.c_str());
    cout << result << endl;
    return 0;
}