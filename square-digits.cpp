#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(int num) {
    string input = to_string(num);
    if (num < 0 || !input.empty()) {
        cout << "Invalid input" << endl;
        return "";
    }
    
    string result = "";
    for (char c : input) {
        if (isdigit(c)) { 
            int digit = c - '0';
            result += to_string(digit * digit);
        }
    }
    return result;
}

int main() {
    int num; cin >> num;
    cout << squareDigits(num) << endl;
    return 0;
}