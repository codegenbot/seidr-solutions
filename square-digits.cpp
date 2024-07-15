#include <iostream>
using namespace std;

int main() {
string squareDigits(int n) {
    string str = to_string(n);
    for (char &c : str) {
        int digit = c - '0';
        c = (char)(digit * digit + '0');
    }
    return str;
}
return 0;