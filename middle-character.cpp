#include <string>
#include <iostream>

int main() {
    using namespace std;
    
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    int length = s.length();
    if (length % 2 == 0) {
        cout << "Middle characters are: " << s.substr(length / 2 - ((length + 1) / 2), (length + 1) % 2 ? 1 : 2) << endl;
    } else {
        cout << "Middle character is: " << s.substr(length / 2, 1) << endl;
    }
    
    return 0;
}