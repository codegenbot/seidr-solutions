#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    string word = "";

    for (char c : input) {
        if (c == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    output += word;

    return output;
}