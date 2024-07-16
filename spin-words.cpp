#include <iostream>
#include <cstring>

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += str.substr(i);
            i++;
        } else if (str.length() - i >= 5) {
            for (int j = strlen(str.substr(i).c_str()); j > 0; j--) {
                result += str[i + j - 1];
            }
            i += str.substr(i).length();
        } else {
            int k = 0;
            while (i < str.length() && str[i] != ' ') {
                result += str[i];
                i++;
                k++;
            }
            if (k > 0) {
                for (int j = k; j > 0; j--) {
                    result += str[i - 1];
                }
                i--;
            } else {
                result += str.substr(i);
                i++;
            }
        }
    }
    return result;
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}