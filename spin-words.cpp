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
    string temp = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            for (int j = temp.length() - 1; j >= 0; j--) {
                reversed += temp[j];
            }
            temp = "";
            reversed += " ";
        } else {
            temp += sentence[i];
        }
    }
    for (int j = temp.length() - 1; j >= 0; j--) {
        reversed += temp[j];
    }
    return reversed;
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