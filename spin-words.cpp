#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            output += " ";
        } else if (i < input.length() - 1 && isalpha(input[i+1])) {
            wordLength = 0;
            while (i + wordLength < input.length() && isalpha(input[i + wordLength]))
                wordLength++;
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--)
                    output += input[i+j];
            } else
                output += input.substr(i, wordLength);
            i += wordLength - 1;
        } else {
            output += input[i];
        }
    }
    return output;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a sentence (or 'q' to quit): ";
        cin >> input;
        if (input == "q")
            break;
        cout << spinWords(input) << endl;
        cin.ignore();
    }
    return 0;
}