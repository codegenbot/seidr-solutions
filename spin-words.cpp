#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else if (str.length() - i > 4) {
            for (int j = i; j < str.length(); j++) {
                if (j != str.length() - 1 && str[j] != ' ')
                    result += str[j];
                else
                    break;
            }
            for (int j = str.length() - 1; j > i; j--) {
                if (str[j] != ' ')
                    result += str[j];
                else
                    break;
            }
            i = str.length();
        } else {
            for (; i < str.length(); i++) {
                if (str[i] == ' ') {
                    i++;
                    break;
                }
                result += str[i];
            }
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence (or 'q' to quit): ";
        cin >> str;
        if (str == "q")
            break;
        cout << spinWords(str) << endl;
    }
    return 0;
}