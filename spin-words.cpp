Here is the solution:

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
                i++;
            }
            string word = "";
            for (int j = i - wordLength; j <= i; j++) {
                word += input[j];
            }
            if (wordLength >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word;
        }
    }
    return output;
}