#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    string tempWord;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += tempWord + " ";
            tempWord = "";
        } else {
            tempWord += sentence[i];
            if (i == sentence.length() - 1) {
                if (tempWord.length() >= 5)
                    result += tempWord;
                else
                    result += tempWord;
            }
        }
    }

    return result;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    cout << spinWords(inputString) << endl;
    return 0;
}