#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int len = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            for (; len > 4 && !result.empty(); ) {
                result.pop_back();
                len--;
            }
            result += " ";
            len = 0;
        } else {
            len++;
            result += str[i];
        }
    }
    for (; len > 4; ) {
        result.pop_back();
        len--;
    }
    return result;
}