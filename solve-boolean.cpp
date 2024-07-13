#include <cstddef>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression.empty()) {
        return false;
    }
    
    bool result = false;
    for (char c : expression) {
        switch (c) {
            case 'T':
                result = true;
                break;
            case 'F':
                result = false;
                break;
            case '|': // or
                if (!result) {
                    return false;
                }
                break;
            case '&': // and
                if (result) {
                    return true;
                }
                break;
        }
    }
    
    return result;
}