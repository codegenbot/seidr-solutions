#include <iostream>
#include <string>
using namespace std;

string middleCharacter(string s) {
    int n = s.size();
    return (n % 2 == 0) ? s.substr(n/2 - 1, 2) : s.substr(n/2, 1);
}

int main() {
    string s;
    getline(cin, s);
    cout << middleCharacter(s) << endl;
    return 0;
}