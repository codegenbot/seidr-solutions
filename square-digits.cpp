#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string squareDigits(int n) {
    string result = "";
    stringstream ss;
    while (n > 0) {
        int digit = n % 10;
        ss << digit * digit;
        n /= 10;
    }
    result = ss.str();
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << squareDigits(n) << endl;
    return 0;
}