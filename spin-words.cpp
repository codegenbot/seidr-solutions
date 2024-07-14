#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i <= str.length()) {
        if (str.find(" ", i) != string::npos) {
            int j = str.find(" ", i);
            if (j - i >= 5) {
                for (int k = j + 1; k > i; --k)
                    result += str[k];
                result += " ";
                i = j + 1;
            } else {
                result += str.substr(i, j - i) + " ";
                i = j + 1;
            }
        } else {
            if (i >= 5) {
                for (int k = str.length() - 1; k > i; --k)
                    result += str[k];
                return result;
            } else
                result += str.substr(i);
            break;
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a string: ";
        cin >> s;
        if (s == "exit")
            break;
        cout << "Spin words: " << spinWords(s) << endl;
    }
    return 0;
}