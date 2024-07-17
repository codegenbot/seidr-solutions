#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            wordLength = i - result.length();
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--)
                    result += str[result.length() + j];
            } else
                result += str.substr(result.length(), wordLength);
            if (i != str.length())
                result += ' ';
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