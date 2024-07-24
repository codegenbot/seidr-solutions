#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) != string::npos) {
            int j = str.find(" ", i);
            string word = str.substr(i, j - i);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            i = j + 1;
        } else {
            string word = str.substr(i, str.length() - i);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            break;
        }
    }
    return result;
}