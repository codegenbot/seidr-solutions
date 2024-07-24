#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(wordLength, i - wordLength);
            wordLength = i + 1;
        }
    }
    result += str.substr(wordLength);

    string temp = "";
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            temp += " ";
            continue;
        }
        if (result[i + 1] != ' ' && strlen(&result[i]) >= 5) {
            temp += result.substr(i, 1);
            i++;
        } else {
            temp += result.substr(i, 1);
        }
    }

    return temp;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}