#include <string>
#include <iostream>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == -1 || str.length() - 1 == i) {
            string word = str.substr(i);
            if (word.length() >= 5)
                result += string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            break;
        }
        int pos = str.find(" ", i);
        string word = str.substr(i, pos - i);
        if (word.length() >= 5)
            result += string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
        i = pos + 1;
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = spinWords(input);

    cout << "Spun words: " << output << endl;

    return 0;
}