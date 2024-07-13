#include <iostream>
using namespace std;

int pairedDigits(const string& s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i < s.length() - 1 ? (s[i] == s[i + 1]) : s[i] == s[i])) { 
            sum += (s[i] - '0'); 
        }
    }
    return sum;
}

int main() {
    string s = "123456";
    int result = pairedDigits(s);
    cout << result; 
    return 0;
}