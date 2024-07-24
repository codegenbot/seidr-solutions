#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            start = i + 1;
            if (word.length() >= 5) {
                reverse(word.begin(), prev(word.end()));
            }
            result += word + " ";
        }
    }
    return result;
}