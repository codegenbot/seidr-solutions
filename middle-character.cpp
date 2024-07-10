#include <iostream>
using namespace std;

string middleCharacter(string s) {
    int n = s.size();
    int middleIdx = n / 2;
    if (n % 2 == 0) {
        return s.substr(middleIdx - 1, 2);
    } else {
        return s.substr(middleIdx, 1);
    }
}
int main() {
    string s;
    cin >> s;
    cout << middleCharacter(s) << endl;
    return 0;
}