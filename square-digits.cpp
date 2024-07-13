```c++
#include <string>
using namespace std;

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit =stoi(string(1, c)); 
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    string result = squareDigits(input);
    cout << "Squared digits: " << result << endl;
    return 0;
}