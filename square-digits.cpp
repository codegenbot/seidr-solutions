```
#include <string>
using namespace std;

int main() {
    string input = "12345"; // replace with your desired input
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    cout << result << endl; // print the result
    return 0;
}