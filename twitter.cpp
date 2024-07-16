#include <string>
#include <cwchar>

using namespace std;

int main() {
    wstring tweet;
    cout << "Enter a tweet: ";
    wgetline(wcin, tweet);
    
    if(tweet.empty()) {
        cout << L"You didn't type anything" << endl;
    }
    else if(tweet.length() > 140) {
        cout << L"Too many characters" << endl;
    } 
    else {
        cout << L"Your tweet has " << tweet.length() << L" characters" << endl;
    }
}