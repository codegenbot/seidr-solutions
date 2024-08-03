#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = false;
    for (char c : s) {
        if (c == 't')
            return true;
        else if (c == 'f')
            return false;
        else if (c == '&') {
            result = false;
        } 
        else if (c == '|') {
            result = true;
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}