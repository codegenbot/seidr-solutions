#include <string>
using namespace std;

int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i+1]) {
            sum += s[i] - '0';
        }
    }
    return sum;

}

int main() {
    cout << "Enter a string of digits: ";
    string input;
    cin >> input;
    cout << "Sum of paired digits is: " << pairedDigits(input) << endl;
    return 0;