```cpp
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    bool result = true;
    for (char c : expression) {
        if (c == 'T') {
            result &= true;
        } else if (c == 'F') {
            result &= false;
        } else if (c == '|') {
            result = !result;
        } else if (c == '&') {
            bool temp = result;
            result = temp;
        }
    }
    return result;
}