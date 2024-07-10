#include <initializer_list>

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || isspace(str[i])) {
            if ((wordLength = i - result.length()) >= 5)
                reverse(result.begin(), result.end());
            result += ' ';
        } else
            result += tolower(str[i]);
    }
    return result.substr(1);
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence: ";
        cin >> str;
        cout << "Spin Words: " << spinWords(str) << endl;
    }
    return 0;