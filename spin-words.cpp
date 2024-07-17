#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
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