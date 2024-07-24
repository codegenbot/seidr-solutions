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
            while (s.find('&') != string::npos) {
                size_t pos = s.find('&');
                s.replace(pos, 1, "false");
            }
            result &= (s == "true" || s == "True" || s == "TRUE") ? true : false;
        } else if (c == '|') {
            while (s.find('|') != string::npos) {
                size_t pos = s.find('|');
                s.replace(pos, 1, "false");
            }
            result |= (s == "true" || s == "True" || s == "TRUE") ? true : false;
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