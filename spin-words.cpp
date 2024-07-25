Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            length = 0;
            result += " ";
        } else {
            length++;
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += str[i - j];
                }
            } else {
                result += str[i];
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