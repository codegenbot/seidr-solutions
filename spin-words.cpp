#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5)
                result += reverseWord(str.substr(wordStart, i - wordStart)) + " ";
            else
                result += str.substr(wordStart, i - wordStart) + " ";
            wordLength = 0;
        } else {
            wordLength++;
        }
    }

    if (wordLength >= 5)
        result += reverseWord(str.substr(wordStart, str.length() - wordStart));
    return result;
}

string reverseWord(string str) {
    string revStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        revStr += str[i];
    }
    return revStr;
}

int main() {
    // Read input from user
    cout << "Enter a sentence: ";
    string input;
    getline(cin, input);

    // Process the input and generate the output
    string output = spinWords(input);

    // Print the output
    cout << "Output: " << output << endl;

    return 0;
}