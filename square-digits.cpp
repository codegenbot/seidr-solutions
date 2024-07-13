```cpp
#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = stoi(string(1, c)); 
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;
    cout << "Square of digits: " << squareDigits(input) << endl;
    return 0;
}