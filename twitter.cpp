#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet = "";
    char c;
    while ((c = cin.get()) && c != '\n') {
        tweet += c;
    }
    
    if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    }
    
    else {
        size_t count = 0;
        for (char t : tweet) {
            if (std::isalnum(t) || std::isspace(t)) {
                ++count;
            } 
            else if (!std::isspace(t) && !std::isalnum(t)) {
                ++count; // increment count only for non-alphanumeric, non-space characters
            }
       
        
        if(count > 140) {
            cout << "Too many characters" << endl;
        }
        
        else {
            cout << "Your tweet has " << count << " characters" << endl;
        }
    }
}