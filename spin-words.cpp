Here's the solution:

#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength;
    for (int i = 0; i <= input.length(); i++) {
        if (i == input.length() || input[i + 1] != ' ') {
            wordLength = i - output.length();
            if (wordLength >= 5) {
                string reversedWord = "";
                for (int j = wordLength - 1; j >= 0; j--) {
                    reversedWord += input[output.length() + j];
                }
                output += reversedWord;
            } else {
                output += input.substr(output.length(), wordLength);
            }
            if (i < input.length()) {
                output += " ";
            }
        }
    }
    return output;
}