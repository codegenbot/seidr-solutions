#include <iostream>
using namespace std;

string middleCharacter(string s) {
    int n = s.length();
    if(n%2 == 0) {
        return s.substr(n/2-1, 2);
    } else {
        return s.substr(n/2, 1);
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Middle character(s): " << middleCharacter(s) << endl;
    return 0;
}