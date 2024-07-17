#include <iostream>
#include <string>

string spinWords(string input) {
    string output = "";
    string word = "";

    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ' ') {
            word += input[i];
        } else {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        }
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    output += word;

    return output;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}