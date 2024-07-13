#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            wordLength = i - result.length();
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--)
                    result += sentence[result.length() + j];
            } else
                result += sentence.substr(result.length(), wordLength);
            if (i != sentence.length())
                result += " ";
        }
    }
    return result;
}