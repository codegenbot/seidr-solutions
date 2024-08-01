#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    output += input[i - j];
                }
            } else {
                output += input.substr(i - wordLength, wordLength);
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; i--) {
            output += input[wordLength - i - 1];
        }
    } else {
        output += input;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter your string: ";
    getline(cin, input);
    string result = spinWords(input);
    cout << "Resulting string: " << result << endl;
    return 0;
}