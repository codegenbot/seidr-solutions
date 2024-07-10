#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += str[i];
            i++;
        } else if (i + strlen(&str[i]) >= 5) {
            for (int j = i + strlen(&str[i]) - 1; j >= i; j--) {
                result += str[j];
            }
            i += strlen(&str[i]);
        } else {
            for (int j = i; j < min(i+6, (int)str.length()); j++) {
                result += str[j];
            }
            i += min(i+6, (int)str.length()) - i;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}