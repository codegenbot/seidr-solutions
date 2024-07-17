```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    cin >> ws; // Consume whitespace
    cout << "Enter a tweet: ";
    if (!(cin >> tweet) || tweet.length() > 140) {
        if (tweet.empty()) {
            cout << "You didn't type anything" << endl;
        } else {
            cout << "Too many characters" << endl;
        }
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
    cin.get(); 
    return 0;
}