Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int i = 0;
    while (i <= input.length()) {
        if (input.find(" ", i) == string::npos || i + 1 >= input.length()) {
            string word = input.substr(i);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            break;
        } else {
            string word = input.substr(i, input.find(" ", i) - i);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            i = input.find(" ", i) + 1;
        }
    }
    return output;
}

int main() {
    string s;
    while (cin >> s) {
        cout << spinWords(s) << endl;
    }
    return 0;
}