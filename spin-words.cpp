#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += " ";
        } else {
            int j = i;
            while (++i && str[i] != ' ');
            if ((j + 1) > 4) {
                for (; j >= 0; j--)
                    result += str[j];
                result += " ";
            } else
                result += str.substr(j, i - j);
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence ('stop' to finish): ";
        cin >> str;
        if (str == "stop")
            break;
        cout << spinWords(str) << endl;
    }
    return 0;
}