#include <iostream>
#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
            count = 0;
        } else {
            count++;
            if (count >= 5) {
                for (int j = i; j >= i - count + 1; j--) {
                    result += sentence[j];
                }
                i -= count - 1;
            } else {
                result += sentence[i];
            }
        }
    }
    return result;
}

string spinWords(string sentence) {
    string reversedSentence = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            reversedSentence += " ";
        } else {
            int wordLength = 0;
            while (i + wordLength < sentence.length() && sentence[i + wordLength] != ' ') {
                wordLength++;
            }
            string word = sentence.substr(i, wordLength);
            if (word.length() >= 5) {
                reversedSentence += word.substr(word.length() - 1) + word.substr(0, word.length() - 1) + " ";
            } else {
                reversedSentence += word + " ";
            }
            i += wordLength;
        }
    }
    return reversedSentence;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a string: ";
        cin >> input;
        if (input == "exit") break;
        cout << spinWords(input) << endl;
    }
    return 0;
}