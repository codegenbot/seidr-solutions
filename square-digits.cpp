```cpp
#include <string>
#include <iostream>

using namespace std;

long long squareDigits(long long num) {
    long long output = 0;
    while (num > 0) {
        int digit = static_cast<int>(num % 10);
        output = output * 10 + digit * digit;
        num /= 10;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input; 
    long long output = squareDigits(stoull(input));
    cout << "Squared digits: " << to_string(output) << endl;
    return 0;
}