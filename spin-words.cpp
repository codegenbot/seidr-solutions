#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (char c : str) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += str[wordLength - i] + " ";
            } else
                result += " ";
            wordLength = 0;
        } else {
            result += c;
            ++wordLength;
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += str[wordLength - i] + " ";
    } else
        result += str;
    return result.substr(0, result.size() - 1);
}

int main() {
    string s;
    while (cin >> s) {
        cout << spinWords(s) << endl;
    }
    return 0;
}