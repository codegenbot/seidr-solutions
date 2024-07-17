#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || isspace(str[i])) {
            if ((wordLength = i - result.length()) >= 5) {
                string temp = result.substr(result.length() - wordLength);
                reverse(temp.begin(), temp.end());
                result += temp;
            }
            while (i < str.length() && isspace(str[i]))
                i++;
            result += ' ';
        } else
            result += str[i];
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