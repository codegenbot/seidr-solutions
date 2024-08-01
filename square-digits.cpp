#include <vector>
#include <iostream>
using namespace std;

string squareDigits(int n) {
    string str = to_string(n);
    string res;
    for (char c : str) {
        int digit = c - '0';
        res += to_string(digit * digit);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << squareDigits(n) << endl;
    return 0;
}