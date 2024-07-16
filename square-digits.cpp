#include <string>
using namespace std;

int main() {
    string n; // replace with user input
    cout << "Enter a positive integer: ";
    cin >> n;
    string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    cout << "Square of each digit: " << res << endl; // print the result
    return 0;
}