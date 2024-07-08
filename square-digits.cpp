#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int number;
    cin >> number;
    string result = squareDigits(number);
    cout << result << endl;
    return 0;
}