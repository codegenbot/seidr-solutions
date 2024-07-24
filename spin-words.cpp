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
    for (int i = sentence.length() - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            reversedSentence += " ";
        } else {
            if (i < sentence.length() - 1 && sentence[i + 1] == ' ') {
                reversedSentence += sentence.substr(i, 5);
                i -= 4;
            } else if (sentence.substr(i).length() >= 5) {
                reversedSentence += sentence.substr(i);
                break;
            } else {
                reversedSentence += sentence[i];
            }
        }
    }
    return sentence.length() < 1 ? "" : reversedSentence;
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