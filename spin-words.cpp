#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == string::npos || str.find(" ", i) - i > 4) {
            result += str.substr(i, str.find(" ", i) - i);
            i = str.find(" ", i);
        } else {
            result += str.substr(i, str.find(" ", i) - i).reverse();
            i = str.find(" ", i);
        }
    }
    if (i < str.length()) {
        result += str.substr(i, str.length() - i).reverse();
    }
    return result;
}

int main() {
    string input;
    while (cin >> input) {
        cout << spinWords(input) << endl;
    }
    return 0;
}