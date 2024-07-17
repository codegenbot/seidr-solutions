Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c == ' ') {
            if (word.length() >= 5)
                word = string(word.rbegin(), word.rend());
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        word = string(word.rbegin(), word.rend());
    result += word;

    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}