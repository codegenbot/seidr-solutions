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
        } else if (i >= str.length() - 5) {
            for (int j = i; j >= max(0, i-5); j--) {
                result += str[j];
            }
            i++;
        } else {
            int k = min(i+6, str.length());
            for (; i < k; i++) {
                result += str[i];
            }
            result += ' ';
            i++;
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