Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; --i)
                    result += word[i];
            } else
                result += word;
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        for (int i = word.length() - 1; i >= 0; --i)
            result += word[i];
    else
        result += word;

    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        cin >> str;
        if (str == "exit")
            break;
        cout << spinWords(str) << endl;
    }
    return 0;
}