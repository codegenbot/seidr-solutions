#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    
    bool result = false;
    bool temp = false;
    char sign = '|';  // Initial sign is set to OR

    for (char c : input) {
        if (c == 't') {
            temp = true;
        } else if (c == 'f') {
            temp = false;
        } else if (c == '&') {
            sign = '&';
        } else if (c == '|') {
            sign = '|';
        }

        if (sign == '|') {
            result = result || temp;
        } else {
            result = result && temp;
        }
    }

    if (result) {
        cout << "True" << "\n";
    } else {
        cout << "False" << "\n";
    }
    
    return 0;
}