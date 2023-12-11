```
#include <string>
#include <cstring>
using namespace std;

bool solve(const string &expression) {
    int len = expression.size();
    bool result = false;
    for (int i = 0; i < len; i++) {
        if (expression[i] == 't') {
            result = true;
        } else if (expression[i] == 'f') {
            result = false;
        } else if (expression[i] == '|') {
            result = result || solve(expression.substr(i + 1));
        } else if (expression[i] == '&') {
            result = result && solve(expression.substr(i + 1));
        }
    }
    return result;
}
```