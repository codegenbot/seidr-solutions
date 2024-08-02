```c++
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter an integer: ";
    cin >> input;
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    cout << "Squared digits: " << result << endl;
    return 0;
}