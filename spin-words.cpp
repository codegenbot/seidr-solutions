#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.size()) {
        if (sentence[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = i + 1;
            while (j < sentence.size() && sentence[j] != ' ') {
                j++;
            }
            string word = sentence.substr(i, j - i);
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word;
            i = j;
        }
    }
    return result;
}