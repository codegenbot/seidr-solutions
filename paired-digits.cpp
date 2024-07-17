#include <string>

int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    string str;
    cout << "Enter a string of digits: ";
    getline(cin, str);
    int result = pairedDigits(str);
    cout << "Sum of the digits whose following digit is the same: " << result << endl;
    return 0;
}