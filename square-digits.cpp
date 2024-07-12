#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin >> num;
    for (char digit : num) {
        int d = digit - '0';
        cout << d * d;
    }
    return 0;
}