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
            result += str[i];
            if (length >= 5) {
                while (length > 4) {
                    result = str.substr(i - length + 1, 1) + result;
                    length--;
                }
            }
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}