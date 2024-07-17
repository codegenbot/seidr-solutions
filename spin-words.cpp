#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (char c : str) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += str[wordLength - i - 1];
                wordLength = 0;
            } else
                result += c;
        } else {
            wordLength++;
            result += c;
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += str[wordLength - i - 1];
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        getline(cin, str);
        cout << spinWords(str) << endl;
        char c;
        cin >> c;
        if (c == 'q')
            break;
    }
    return 0;
}