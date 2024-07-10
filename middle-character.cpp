#include <iostream>
#include <string>
using namespace std;

wstring middleCharacter(wstring s) {
    int n = s.size();
    if (n % 2 == 0) {
        return s.substr((n-1)/2, 2);
    } else {
        return s.substr(n/2, 1);
    }
}

int main() {
    wstring s;
    wcin >> s;
    wcout << middleCharacter(s) << endl;
    return 0;
}