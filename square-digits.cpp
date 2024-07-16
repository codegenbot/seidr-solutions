```c++
#include <string>
using namespace std;

int main() {
    string n;
    cout << "Enter a positive integer: ";
    getline(cin, n);
    string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    cout << "The square of digits is: " << res << endl;
    return 0;
}