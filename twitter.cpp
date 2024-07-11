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
        for (char c : tweet) {
            if (std::isalnum(c)) {
                ++count;
            } 
        }
        
        if(count > 140) {
            cout << "Too many characters" << endl;
        }
        
        else {
            cout << "Your tweet has " << count << " characters" << endl;
        }
    }
}