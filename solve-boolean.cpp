```c++
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            res &= (i + 1 < s.length() && s[i + 1] == 'T');
        } else if (s[i] == '|') {
            res |= (i + 1 < s.length() && s[i + 1] == 'T');
        }
    }
    return res;
}

int main() {
    string input;
    cout << "Enter the Boolean expression: ";
    cin >> input;
    bool result = solveBoolean(input);
    if (result)
        cout << "The resulting Boolean is true." << endl;
    else
        cout << "The resulting Boolean is false." << endl;
    return 0;
}