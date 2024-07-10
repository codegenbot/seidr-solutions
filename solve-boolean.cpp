#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t") return true;
    if (expression == "F" || expression == "f") return false;
    
    int i = 0, j = 0;
    while (j < expression.size()) {
        if (expression[j] == '&') {
            j++;
            break;
        }
        j++;
    }
    
    string left = expression.substr(0, j);
    string right = expression.substr(j);
    
    return solveBoolean(left) && solveBoolean(right);
}

int main() {
    // Your test cases
    cout << boolalpha << solveBoolean("t") << endl;  // True
    cout << boolalpha << solveBoolean("f") << endl;  // False
    cout << boolalpha << solveBoolean("f&f") << endl;  // False
    cout << boolalpha << solveBoolean("f&t") << endl;  // False
    cout << boolalpha << solveBoolean("t&f") << endl;  // False
    
    return 0;
}