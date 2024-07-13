#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin >> num;
    string result;
    for (char digit : num) {
        int d = digit - '0';
        result += to_string(d * d);
    }
    cout << result;
    return 0;
}