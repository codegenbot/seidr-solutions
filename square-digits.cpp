Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(int n) {
    string str = to_string(n);
    string result;
    
    for (char c : str) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    
    return result;
}

int main() {
    int num;
    cin >> num;
    cout << squareDigits(num) << endl;
    return 0;
}