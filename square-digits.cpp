#include <string>
using namespace std;

string squareDigits(string n) {
    string res = "";
    for (char c : n) {
        int num = (c - '0') * (c - '0');
        res += to_string(num);
    }
    return res;
}