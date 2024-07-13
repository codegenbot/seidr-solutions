#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            int wordLength = i - result.length();
            if (wordLength >= 5)
                result.append(string(str.substr(i-wordLength, wordLength)).reverse()).append(" ");
            else
                result.append(str.substr(result.length(), wordLength + 1)).append(" ");
        }
    }
    return result.substr(0, result.length() - 1);
}