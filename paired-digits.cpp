#include <vector>
#include <iostream>
#include <string>

using namespace std;

int pairedDigits(string s) {
    int sum = 0;
    for(int i = 0; i < s.length() - 1; i++) {
        if(s[i] == s[i+1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    string input;
    cout << "Enter a string of digits: ";
    cin >> input;
    int result = pairedDigits(input);
    cout << "The sum of the paired digits is: " << result << endl;
    return 0;
}