#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    cout.imbue(locale("en_US.UTF-8"));
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    cout << validateTweet(input) << endl;
    return 0;
}