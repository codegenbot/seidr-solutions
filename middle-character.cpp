#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int len = s.length();
    if (len % 2 == 0) {
        string res = s.substr(len / 2 - 1, 2);
        cout << "Middle characters are: " << res << endl;
    } else {
        string res = s.substr(len / 2, 1);
        cout << "Middle character is: " << res << endl;
    }
    
    return 0;
}