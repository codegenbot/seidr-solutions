#include <iostream>
#include <string>

using namespace std;

int main() {
    string digits;
    cin >> digits;
    
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (digits[i] == digits[i + 1]) {
            sum += digits[i] - '0';
        }
    }
    
    cout << sum << endl;
    
    return 0;
}