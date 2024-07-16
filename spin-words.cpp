#include <iostream>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else if (str.length() - i >= 5) {
            for (int j = 5; j > 0; j--) {
                result += str[str.length() - j];
            }
            i += 5;
        } else {
            int k = 0;
            while (i < str.length() && str[i] != ' ') {
                result += str[i];
                i++;
                k++;
            }
            if (k > 0) {
                for (int j = k; j > 0; j--) {
                    result += str[str.length() - j];
                }
                i--;
            } else {
                while (i < str.length()) {
                    result += str[i];
                    i++;
                }
            }
        }
    }
    return result;
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}