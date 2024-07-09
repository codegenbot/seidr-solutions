#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;
    string result = "";
    for (char digit : num) {
        int n = digit - '0';
        result += to_string(n * n);
    }
    cout << result;
    return 0;
}