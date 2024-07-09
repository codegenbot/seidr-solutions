#include <string>
#include <algorithm>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                result += word;
                reverse(word.begin(), word.end());
                result += " ";
                word = "";
            } else {
                result += word;
                result += " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        result += word;
        reverse(word.begin(), word.end());
    } else {
        result += word;
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << spinWords(str) << endl;
    return 0;
}