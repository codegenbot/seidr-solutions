#include <string>
#include <iostream>
using namespace std;

bool solveBoolean(const string& s, size_t& i) {
    bool result = false;
    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                i++;  
                return true;
            case 'F':
                i++;  
                return false;
            case '&': {
                i++; // skip &
                if (!solveBoolean(s, i)) return false;  // short-circuit
                break;
            }
            case '|': {
                i++; // skip |
                result = solveBoolean(s, i);
                if (result) return true;  // short-circuit
                break;
            }
        }
        i++;
    }

    return result;
}

int main() {
    const string input = "TF|";  
    size_t i = 0;
    bool result = solveBoolean(input, i);
    cout << (result ? "True" : "False");  
    return 0;
}