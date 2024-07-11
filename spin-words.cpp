#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--)
                    result += word[j];
            } else
                result += word;
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        for (int j = word.length() - 1; j >= 0; j--)
            result += word[j];
    } else
        result += word;

    return result;
}