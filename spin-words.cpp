#include <string>
using namespace std;

string spinWords(string str) {
    string output = "";
    string word = "";

    for (int i = 0; i <= str.length() - 1; i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5)
                reverse(word.begin(), word.end());
            output += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    // For the last word
    if (word.length() >= 5)
        reverse(word.begin(), word.end());

    output += word;

    return output;
}