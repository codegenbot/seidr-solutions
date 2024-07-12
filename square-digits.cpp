#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;
    string output = "";
    while (num > 0) {
        int digit = num % 10;
        output = to_string(digit * digit) + output;
        num /= 10;
    }
    cout << output << endl;
    return 0;
}