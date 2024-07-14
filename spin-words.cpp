#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    while ((pos = str.find(' ')) != string::npos) {
        if (str.substr(0, pos).length() >= 5) {
            for (int i = str.substr(0, pos).length() - 1; i >= 0; i--)
                result += str.substr(0, pos)[i];
            result += ' ';
        } else
            result += str.substr(0, pos);
        str.erase(0, pos + 1);
    }
    if (str.length() >= 5)
        for (int i = str.length() - 1; i >= 0; i--)
            result += str[i];
    else
        result += str;
    return result;
}