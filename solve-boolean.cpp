#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    int op = 0; // operator (0: none, 1: &, 2: |)
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'T') {
            res = true;
        } else if (s[i] == 'F') {
            res = false;
        } else if (s[i] == '&') {
            op = 1;
        } else if (s[i] == '|') {
            op = 2;
        }
    }
    return res;
}

int main() {
    // Example usage
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}