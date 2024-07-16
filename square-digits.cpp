```cpp
#include <iostream>
using namespace std;

string squareDigits(string input) {
    string result;
    for (char c : input) {
        result += to_string((c - '0') * (c - '0'));
    }
    return result;
}

int main() {
    cin.ignore(); 
    string input;
    cout << "Enter a positive integer: ";
    cin >> input; 
    string result = squareDigits(input); 
    cout << "Squared digits: " << result << endl;
    return 0;
}