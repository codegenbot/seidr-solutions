#include <iostream>
#include <string>
#include <cwchar>

using namespace std;

int main() {
    wstring tweet;
    cout << L"Enter a tweet: ";
    getline(wcin, tweet);
    
    if(tweet.empty()) {
        wcout << L"You didn't type anything" << endl;
    }
    else if(tweet.length() > 140) {
        wcout << L"Too many characters" << endl;
    } 
    else {
        wcout << L"Your tweet has " << tweet.length() << L" characters" << endl;
    }
}