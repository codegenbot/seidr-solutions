#include <iostream>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        int j = 0;
        while (i < str.length() && str[i] != ' ') {
            j++;
            i++;
        }
        if (j >= 5) {
            for (int k = j; k > 0; k--) {
                result += str[str.length() - k];
            }
        } else {
            while (i < str.length()) {
                result += str[i];
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