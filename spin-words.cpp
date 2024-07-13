```cpp
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
                    result += sentence.substr(i - 1, j + 1)[j];
            } else
                result += sentence.substr(i - wordLength, wordLength);
            if (i != sentence.length())
                result += " ";
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}