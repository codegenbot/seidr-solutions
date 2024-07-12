#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    
    bool result = false;
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'T') {
            result = true;
        } else if (input[i] == 'F') {
            result = false;
        }
        
        if (i + 1 < input.size() && input[i + 1] == '|') {
            // handle OR operation
        } else if (i + 1 < input.size() && input[i + 1] == '&') {
            // handle AND operation
            i++; // Skip the operator
        } else {
            break;
        }
    }
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}