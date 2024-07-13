#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            int wordLength = i - result.length();
            if (wordLength >= 5)
                result.append(string(wordLength > 0 ? &str[i-wordLength] : "") + " ");
            else
                result.append(str.substr(result.length(), wordLength) + " ");
        }
    }
    return result;
}

int main() {
}