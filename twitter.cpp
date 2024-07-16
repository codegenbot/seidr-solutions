```c++
#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    std::cout.imbue(locale(""));
    wstring tweet;
    cout << L"Enter a tweet: ";
    wgetline(wistringstream(), tweet);

    if(tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
}