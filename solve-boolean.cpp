```
using namespace std;

string solveBoolean(string s) {
    string result = "True";
    for (char c : s) {
        if (c == '|') {
            if (result == "False") result = "True";
        } else if (c == '&') {
            if (result == "True") result = "False";
        } else {
            result = c;
        }
    }
    return result;
}