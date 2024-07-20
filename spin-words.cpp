#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if ((wordLength = i - result.length()) >= 5)
                reverse(result.rbegin(), result.rend());
            result += str.substr(0, i) + " ";
            str = str.substr(i);
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    while (cin >> str) {
        cout << spinWords(str) << endl;
    }
    return 0;
}