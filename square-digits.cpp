#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    string result = "";
    while (num) {
        int digit = num % 10;
        num /= 10;
        result += to_string(digit * digit);
    }
    
    cout << "Squared digits: " << result << endl;
    return 0;
}