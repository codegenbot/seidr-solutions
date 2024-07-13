#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            output += " ";
        } else {
            wordLength = 0;
            while (i < input.length() && input[i] != ' ') {
                wordLength++;
                output += input[i];
                i++;
            }
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    output += input[i - j - 1];
                }
            } else {
                output += " ";
            }
        }
    }
    return output;
}