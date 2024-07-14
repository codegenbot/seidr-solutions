```cpp
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
                string temp = "";
                for (int j = length - 1; j >= 0; j--) {
                    temp += str[i - j];
                }
                result += temp + " ";
            } else {
                result += str.substr(i-length+1, length) + " ";
            }
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}