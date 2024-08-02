#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    string word = "";

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    output += word[j];
                }
            } else {
                output += word;
            }
            word = "";
        } else {
            word += input[i];
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; i--) {
            output += word[i];
        }
    } else {
        output += word;
    }

    return output;
}