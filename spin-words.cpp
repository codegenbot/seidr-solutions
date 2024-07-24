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
    string reversed = "";
    int wordStart = 0;
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            string word = sentence.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                reversed += std::string(word.rbegin(), word.rend()) + " ";
            } else {
                reversed += word + " ";
            }
            wordStart = i + 1;
        }
    }
    return reversed.substr(0, reversed.length() - 1);
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