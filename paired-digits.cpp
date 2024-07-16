```cpp
#include <iostream>
using namespace std;

int main() {
    cout.tie(nullptr); 
    string input;
    getline(cin, input);
    
    int result = pairedDigits(input);
    return 0;
}

int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i+1]) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}