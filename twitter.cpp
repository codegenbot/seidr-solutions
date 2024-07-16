#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if (std::ctype<char>::make_lower(tweet).length() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << std::ctype<char>::make_lower(tweet).length() << " characters" << endl;
    }
    
    return 0;
}