#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || isspace(str[i])) {
            if ((length = i - result.length()) >= 5)
                reverse(result.rbegin(), result.rend());
            result += ' ';
        } else
            result += tolower((unsigned char)str[i]);
    }
    return result.substr(1);
}