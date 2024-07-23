#include <string>
#include <iostream>

int main() {
    using namespace std;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int length = s.length();
    int start = length / 2;
    if (length % 2 == 0) {
        cout << "Middle characters are: " << s.substr(start, 2) << endl;
    } else {
        cout << "Middle character is: " << s.substr(start, 1) << endl;
    }

    return 0;
}