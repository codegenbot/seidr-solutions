#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                result += (char*)malloc((word.length() + 1)*sizeof(char));
                for (int j = word.length(); j >= 0; j--) {
                    ((char*)result.rbegin())[j] = word[j];
                }
                ((char*)result.rbegin())++;
                free(((char*)result.rbegin()));
            } else {
                result += word;
            }
            if (i < str.length()) {
                result += " ";
            }
            start = i + 1;
        }
    }
    return result;
}