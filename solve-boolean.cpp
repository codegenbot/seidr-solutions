#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T' || c == 't') {
            continue;
        } else if (c == 'F' || c == 'f') {
            return false;
        } else if (c == '&') {
            while(s.find('&') != string::npos) {
                int pos = s.find('&');
                s.replace(pos, 1, "0");
            }
            result &= (s[0] == 'T' || s[0] == 't');
        } else if (c == '|') {
            while(s.find('|') != string::npos) {
                int pos = s.find('|');
                s.replace(pos, 1, "0");
            }
            result |= (s[0] == 'T' || s[0] == 't');
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a Boolean expression (T/F/|&): ";
    cin >> s;

    bool result = solveBoolean(s);
    if(result)
        cout << "Result: TRUE" << endl;
    else
        cout << "Result: FALSE" << endl;

    return 0;
}