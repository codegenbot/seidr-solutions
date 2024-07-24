#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            result = false;
            break;
        } else if (s[i] == '|') {
            result = !result;
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << boolalpha << solveBoolean(input) << endl;
    return 0;
}