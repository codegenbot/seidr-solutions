#include <vector>
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string s) {
    int result = s.find("T");
    if (result != string::npos)
        return true;
    else
        return false;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False") << endl;
    return 0;
}