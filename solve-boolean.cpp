#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'T') {
            i++;
        } else if (s[i] == 'F') {
            i++;
        } else if (s[i] == '|') {
            res |= s[i + 1] == 'T';
            i += 2;
        } else if (s[i] == '&') {
            res &= s[i + 1] == 'T';
            i += 2;
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