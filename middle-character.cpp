#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int len = s.length();
    if (len % 2 == 0) {
        cout << "Middle characters are: " << s.substr(len / 2 - 1, 2) << endl;
    } else {
        cout << "Middle character is: " << s.substr(len / 2, 1) << endl;
    }
    
    return 0;
}