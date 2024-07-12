#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int len = s.length();
    if (len % 2 == 0) {
        string mid1 = s.substr(len / 2 - 1, 1);
        string mid2 = s.substr(len / 2, 1);
        cout << "Middle characters are: " << mid1 + mid2 << endl;
    } else {
        string mid = s.substr(len / 2, 1);
        cout << "Middle character is: " << mid << endl;
    }
    
    return 0;
}