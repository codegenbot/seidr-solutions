#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == ' ') {
            output += ' ';
        } else {
            string word;
            while (i < input.size() && input[i] != ' ') {
                word += input[i];
                i++;
            }
            i--; // backtracking
            if (word.size() >= 5) {
                string reversed = "";
                for (int j = word.size() - 1; j >= 0; j--) {
                    reversed += word[j];
                }
                output += reversed;
            } else {
                output += word;
            }
        }
    }
    return output;
}

int main() {
    // test cases
    cout << spinWords("a") << endl;
    cout << spinWords("this is a test") << endl;
    cout << spinWords("this is another test") << endl;
    cout << spinWords("hi") << endl;
    return 0;
}