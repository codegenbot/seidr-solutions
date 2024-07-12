#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    
    bool result = true;
    
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'T') {
            result = result && true;
        } else if (input[i] == 'F') {
            result = result && false;
        } else if (input[i] == '|') {
            // OR operation
            // do nothing for now
        } else if (input[i] == '&') {
            // AND operation
            result = true;
        }
    }
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}