```cpp
#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string tweet;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cout << "Enter a tweet: ";
    
    getline(cin, tweet);
    
    if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
    
    return 0;
}