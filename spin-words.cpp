Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) != string::npos) {
            int spaceIndex = str.find(" ", i);
            if (spaceIndex - i >= 5) {
                for (int j = spaceIndex + 1; j > i; --j)
                    result += str[j] + " ";
                i = spaceIndex;
            } else {
                result += str.substr(i, spaceIndex - i) + " ";
                i = spaceIndex + 1;
            }
        } else if (i < str.length()) {
            if (str.length() - i >= 5) {
                for (int j = str.length() - 1; j > i; --j)
                    result += str[j] + " ";
                break;
            } else {
                result += str.substr(i, str.length() - i) + " ";
                break;
            }
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        cin >> str;
        cout << spinWords(str) << endl;
    }
    return 0;
}