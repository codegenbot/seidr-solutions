#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    cout.imbue(locale());
    wstring tweet;
    wcout << L"Enter a tweet: ";
    getline(wcin, tweet);
    
    if(tweet.length() > 140) {
        wcout << L"Too many characters" << endl;
    } else if(tweet.empty()) {
        wcout << L"You didn't type anything" << endl;
    } else {
        wcout << L"Your tweet has " << tweet.length() << L" characters" << endl;
    }
}