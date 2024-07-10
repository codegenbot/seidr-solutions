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
        } else if (i + str.length() - i - 1 >= 5) {
            for (int j = i + str.length() - i - 1; j >= max(0, i-5); j--) {
                result += str[j];
            }
        } else {
            for (int j = i; j < min(i+6, str.length()); j++) {
                result += str[j];
            }
        }
        i++;
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