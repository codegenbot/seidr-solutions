#include <string>
using namespace std;

int main() {
    string n;
    cout << "Enter a number: ";
    cin >> n;
    string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    cout << "Squared digits of " << n << ": " << res << endl;
    return 0;
}