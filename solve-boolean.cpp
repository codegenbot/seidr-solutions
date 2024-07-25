#include <string>
using namespace std;

bool solveBoolean(string s) {
    string operation = "";
    bool result = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&' || s[i] == '|') {
            if (operation == "and") {
                result = (result && (s[i] == '&' ? true : false));
            } else if (operation == "or") {
                result = (result || (s[i] == '&' ? false : true));
            }
            operation = s[i];
        } else if (s[i] == 't') {
            result = true;
        } else if (s[i] == 'f') {
            result = false;
        }
    }
    return result;
}