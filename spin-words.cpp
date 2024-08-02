Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLen;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(i - wordLen, i);
            wordLen = 0;
            result += " ";
        } else {
            wordLen++;
        }
    }
    result += str.substr(str.length() - wordLen, str.length());
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            string temp = str.substr(i - wordLen + 1, i);
            int j = temp.length();
            while (j > 4) {
                temp = temp.substr(1, temp.length() - 2) + temp[0] + temp[temp.length() - 1];
                j = temp.length();
            }
            result += temp;
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Output: " << spinWords(input) << endl;
    return 0;
}