Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            output += " ";
        } else {
            if (i < input.length() - 1 && isalpha(input[i+1])) {
                int j = i;
                while (j > 0 && !isalpha(input[j-1])) {
                    j--;
                }
                for (int k = j; k >= 0; k--) {
                    output += input[k];
                }
                output += " ";
            } else {
                output += input[i];
            }
        }
    }
    return output;
}

int main() {
    string s;
    while (true) {
        cout << "input: ";
        cin >> s;
        if (s == "exit") break;
        cout << "output: " << spinWords(s) << endl;
    }
    return 0;
}