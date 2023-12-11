
#include <string>
#include <cmath>

using namespace std;

bool evaluate(const string &expression) {
    int n = expression.size();
    bool result = false;
    
    for (int i = 0; i < n; i++) {
        if (expression[i] == 'T') {
            result = true;
        } else if (expression[i] == 'F') {
            result = false;
        } else if (expression[i] == '|') {
            result = result || evaluate(expression.substr(i + 1));
        } else if (expression[i] == '&') {
            result = result && evaluate(expression.substr(i + 1));
        }
    }
    
    return result;
}
