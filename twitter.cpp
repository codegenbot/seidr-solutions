```cpp
#include <iostream>
#include <string>

using namespace std;

std::string validateTweet(const string& input) {
    if (input.empty()) {
        return "You didn't type anything";
    }
    size_t len = input.length();
    if (len > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(len) + " characters";
}

int main() {
    string str;
    cout << "Enter your tweet: ";
    getline(cin, str);
    if (str.length() > 140) {
        cout << "Too many characters" << endl;
    } else if (str.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << str.length() << " characters" << endl;
    }
    return 0;
}