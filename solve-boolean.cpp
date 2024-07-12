#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    
    bool result = true;
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 't' || input[i] == 'T') {
            result = true;
        } else if (input[i] == 'f' || input[i] == 'F') {
            result = false;
        }
        
        if (i + 1 < input.size()) {
            if (input[i + 1] == '|') {
                continue;
            } else if (input[i + 1] == '&') {
                i++;
            } else {
                break;
            }
        }
    }
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}