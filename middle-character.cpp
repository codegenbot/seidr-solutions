#include <iostream>
#include <string>

using namespace std;

string middleCharacter(string s) {
    if (s.empty()) return ""; 
    size_t n = s.size();
    if (n % 2 == 0) {
        return s.substr(n / 2 - 1, 2);
    } else {
        return s.substr(n / 2, 1);
    }
}

int main() {
    string s;
    getline(cin, s);
    cout << middleCharacter(s) << endl;
    return 0;
}