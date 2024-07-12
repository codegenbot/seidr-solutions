#include <string>
using namespace std;

bool solveBoolean(string expression) {
    string res = "T";
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == '|') {
            res = "F";
            i++;
            continue;
        }
        if (expression[i] == '&') {
            res = (res == "F") ? "F" : "T";
            i++;
            continue;
        }
        res = (res == "T" && expression[i] == 'T') || (res == "F" && expression[i] == 'F') ? "T" : "F";
        i++;
    }
    return res == "F";
}