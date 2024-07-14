#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int len;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || isspace(str[i])) {
            len = i - result.length();
            if (len >= 5)
                reverse(result.rbegin(), result.rend());
            result += ' ';
        } else
            result += tolower(str[i]);
    }
    return result.substr(1);
}