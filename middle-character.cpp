#include <iostream>
using namespace std;

string middleCharacter(string s) {
    int length = s.length();
    if (length % 2 == 1)
        return string(1, s[length / 2]);
    else
        return string(2, s[(length - 1) / 2]) + s[length / 2];
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string output = middleCharacter(input);
    cout << "Middle character(s): " << output << endl;
    return 0;
}