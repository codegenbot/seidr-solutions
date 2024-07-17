#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    string word = "";

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            if (word.length() >= 5) {
                string revWord = "";
                for (int j = word.length() - 1; j >= 0; j--) {
                    revWord += word[j];
                }
                output += revWord + " ";
            } else {
                output += word + " ";
            }
            word = "";
        } else {
            word += input[i];
        }
    }

    if (word.length() >= 5) {
        string revWord = "";
        for (int j = word.length() - 1; j >= 0; j--) {
            revWord += word[j];
        }
        output += revWord;
    } else {
        output += word;
    }

    return output;
}