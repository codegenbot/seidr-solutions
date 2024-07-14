#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if ((wordLength = i - result.length()) >= 5)
                for (int j = wordLength - 1; j >= 0; j--)
                    result += str[result.length() + j];
            else
                result += str.substr(result.length(), wordLength);
            if (i < str.length())
                result += ' ';
        }
    }
    return result;
}