#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string input, output;
    cin >> input;
    int len = input.length();
    for (int i = 0; i < len; i++) {
        if (input[i] == ' ') {
            continue;
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            output += input[i];
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            output += input[i];
        } else {
            cout << "Invalid input!" << endl;
            return 1;
        }
    }
    cout << "The reversed string is: " << output << endl;
    return 0;
}