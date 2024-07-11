#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t") return true;
    if (expression == "F" || expression == "f") return false;
    
    int i = 0, j = 0;
    while (i < expression.size()) {
        if (expression[i] == '|') {
            j = i + 1;
            break;
        }
        i++;
    }
    
    string left = expression.substr(0, i);
    string right = expression.substr(j);
    
    return solveBoolean(left) || solveBoolean(right);
}

int main() {
    // Your code to test the function
    return 0;
}