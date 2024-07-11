```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    }
    
    else {
        size_t count = 0;
        string temp = tweet; // copy the original tweet to avoid changing it
        for (char c : temp) {
            if (!std::isalnum(c) && !std::isspace(c)) { 
                ++count;
            }
        }

        if(count > 140) {
            cout << "Too many characters" << endl;
        }
        
        else {
            cout << "Your tweet has " << (tweet.length() - count) << " characters" << endl;
        }
    }
}