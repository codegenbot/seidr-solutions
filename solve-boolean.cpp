#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    
    bool result = false;
    
    for (int i = 0; i < input.size(); i += 2) {
        if (input[i] == 't') {
            result = true;
        } else if (input[i] == 'f') {
            result = false;
        }
        
        if (i + 1 < input.size() && input[i + 1] == '|') {
            continue;
        } else if (i + 1 < input.size() && input[i + 1] == '&') {
            i++;
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