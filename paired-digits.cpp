#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int sum = 0;
    cout << "Enter a string of digits: ";
    cin >> input;
    for (int i = 0; i < input.length() - 1; i++) {
        if (input[i] == input[i + 1]) {
            sum += input[i] - '0';
        }
    }
    cout << "Sum of paired digits: " << sum << endl;
    return 0;
}