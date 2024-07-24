#include <string>
using namespace std;

int main() {
    string squareDigits(string input) {
        string result = "";
        for (char c : input) {
            int digit = c - '0';
            result += to_string(digit * digit);
        }
        return result;
    }

    string result = squareDigits("123");
    cout << result << endl;  // Print the resulting string

    return 0;
}