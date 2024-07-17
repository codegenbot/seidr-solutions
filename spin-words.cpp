#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string temp = "";

    for(int i = 0; i < str.length(); i++) {
        char c = str[i];
        if(c != ' ') {
            temp += c;
        } else {
            if(temp.length() >= 5) {
                for(int j = temp.length() - 1; j >= 0; j--) {
                    result += temp[j];
                }
            } else {
                result += temp;
            }
            temp = "";
        }
    }

    if(temp.length() >= 5) {
        for(int i = temp.length() - 1; i >= 0; i--) {
            result += temp[i];
        }
    } else {
        result += temp;
    }

    return result;
}