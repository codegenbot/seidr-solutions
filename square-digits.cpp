#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    string output = squareDigits(input);
    cout << "The result is: " << output << endl;
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = stoi(string(1, c)); 
        output += to_string(digit * digit);
    }
    return output;
}