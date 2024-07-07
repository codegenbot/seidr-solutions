```cpp
#include <iostream>
#include <string>

using namespace std;

string middleCharacter(string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return s.substr(length / 2 - 1, 2);
    } else {
        return string(1, s[length / 2]);
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string result = middleCharacter(s);
    cout << "Middle character(s): " << result << endl;
    return 0;
}