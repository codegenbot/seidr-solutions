#include <vector>
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (i + 1 < s.length() && s[i+1] == '&') i++;
            s.erase(i, 1);
            i--;
        } else if (s[i] == '|') {
            while (i + 1 < s.length() && s[i+1] == '|') i++;
            s.erase(i, 1);
            i--;
        }
    }

    string truthTable[2][2] = {{"F", "F"}, {"T", "T"}};
    int value = (s == "TT" || s == "FF") ? 0 : (s == "TF" || s == "FT") ? 1 : -1;
    return value != -1 && truthTable[!!stoi(s)][value][0] == 'T';
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}