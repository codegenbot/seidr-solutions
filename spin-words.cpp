#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += str[i];
        } else if (i >= str.length() - 5) {
            for (int j = i; j >= max(0, i-5); j--) {
                result += str[j];
            }
        } else {
            for (int j = i; j < min(i+6, str.length()); j++) {
                result += str[j];
            }
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