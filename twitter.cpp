#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 0;
    }

    int length = (int)tweet.erase(0, tweet.find_last_of(' ') + 1);
    
    if (length > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << length << " characters" << endl;
    }
    return 0;
}