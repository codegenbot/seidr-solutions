#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string temp;
    bool wordStarted = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (!wordStarted || temp.length() >= 5) {
                for (int j = temp.length() - 1; j >= 0; j--) {
                    result += temp[j];
                }
            } else {
                result += temp;
            }
            wordStarted = false;
            temp = "";
        } else {
            wordStarted = true;
            temp += str[i];
        }
    }

    if (!wordStarted || temp.length() >= 5) {
        for (int j = temp.length() - 1; j >= 0; j--) {
            result += temp[j];
        }
    } else {
        result += temp;
    }

    return result;
}