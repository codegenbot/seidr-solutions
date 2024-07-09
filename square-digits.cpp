#include <string>
#include <iostream>
using namespace std;

string squareDigits(string input) {
    long long num = 0; 
    for (char c : input) {
        num = num * 10 + (c - '0');
    }
    string output = to_string(num * num);
    return output;
}

int main() {
    string input = "932545";
    cout << squareDigits(input) << endl;
}