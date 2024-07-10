#include <iostream>
#include <string>

using namespace std;

string middleCharacter(string s) {
    int n = s.size();
    if (n == 0)
        return "Empty string";
    if (n % 2 == 0)
        return s.substr(n / 2 - 1, 2);
    else
        return s.substr(n / 2, 1);
}

int main() {
    string s;
    getline(cin, s);
    cout << middleCharacter(s) << endl;
    return 0;
}