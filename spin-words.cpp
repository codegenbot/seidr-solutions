Here is the solution:

#include <iostream>
#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
        } else {
            wordLength = 0;
            while (i < sentence.length() && sentence[i] != ' ') {
                i++;
                wordLength++;
            }
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    result += sentence[i - j];
                }
            } else {
                while (i < sentence.length() && sentence[i] != ' ') {
                    i++;
                    result += sentence[i - 1];
                }
            }
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}