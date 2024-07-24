#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == string::npos) {
            result += str.substr(i);
            break;
        }
        int spaceIndex = str.find(" ", i);
        int length = spaceIndex - i;
        if (length >= 5) {
            for (int j = length - 1; j >= 0; --j)
                result += str[i + j];
            result += " ";
        } else {
            result += str.substr(i, length);
            result += " ";
        }
        i = spaceIndex + 1;
    }
    if (result.length() > 0 && result.back() == ' ')
        result.pop_back();
    return result;
}