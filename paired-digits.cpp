#include <string>
#include <iostream>

using namespace std;

int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] - '0') == (i < s.length() - 1 ? (s[i+1] - '0') : 0)) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}

int main() {
    string s;
    cout << "Enter a string of digits: ";
    cin >> s;
    cout << "The sum of paired digits is: " << pairedDigits(s) << endl;
    return 0;
}