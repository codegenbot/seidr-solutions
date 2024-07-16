#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    wstringstream tweet;
    cout.imbue(locale(""));
    getline(wcin, tweet);
    
    if(tweet.str().length() > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.str().empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.str().length() << " characters" << endl;
    }
}