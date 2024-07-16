#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    cout.imbue(locale(""));
    wstringstream tweet;
    getline(tweet, L"");
    
    if(tweet.str().length() > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.str().empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.str().length() << " characters" << endl;
    }
}