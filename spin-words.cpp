#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            string word = sentence.substr(start, i - start);
            if (word.length() >= 5) {
                result += string(word.rbegin(), word.rend()) + " ";
            } else {
                result += word + " ";
            }
            start = i + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}