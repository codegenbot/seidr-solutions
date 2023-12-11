#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cin >> input;
    int length = input.length();
    if (length % 2 == 0) {
        cout << input[length / 2 - 1] + input[length / 2];
    } else {
        cout << input[length / 2];
    }
    return 0;
}