#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    if (input.empty()) {
        cout << "You didn't type anything" << endl;
    } else if (input.length() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << input.length() << " characters" << endl;
    }
    return 0;
}