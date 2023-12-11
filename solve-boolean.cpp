#include <string>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    int size = input.size();
    bool result = false;
    char op = '&';

    for (int i = 0; i < size; i++) {
        if (input[i] == 't' || input[i] == 'T') {
            result = true;
        } else if (input[i] == 'f' || input[i] == 'F') {
            result = false;
        } else if (input[i] == op) {
            result = !result;
        }
    }

    cout << boolalpha << result << endl;
    return 0;
}