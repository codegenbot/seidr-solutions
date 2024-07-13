```cpp
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    string output = squareDigits(input);
    cout << "Squared digits: " << output << endl;
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int num = (int)(c - '0'); 
        output += to_string(num * num); 
    }
    return output;
}