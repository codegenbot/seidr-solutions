#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            start = i + 1;
            if (word.length() >= 5)
                result.append(word).append(" ");
            else
                result.append(word).append(" ");
        }
    }
    return result.substr(0, result.length() - 1);
}