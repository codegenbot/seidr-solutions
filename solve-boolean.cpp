#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    
    bool result = true;
    
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'T') {
            result = result & true;
        } else if (input[i] == 'F') {
            result = result & false;
        } else if (input[i] == '|') {
            // do nothing
        } else if (input[i] == '&') {
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