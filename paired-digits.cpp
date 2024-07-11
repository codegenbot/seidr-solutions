Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

int pairedDigitsSum(const string& str) {
    int sum = 0;
    for (int i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i+1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    string input;
    cin >> input;
    cout << pairedDigitsSum(input) << endl;
    return 0;
}