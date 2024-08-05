#include <string>

string squareDigits(string n) {
    string result = "";
    for(char c : n) {
        int num = (int)c - '0';
        result += to_string(num * num);
    }
    return result;
}