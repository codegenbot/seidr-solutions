#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordCount = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (wordCount >= 5) {
                for (int j = i - 1; j >= 0; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(wordCount, i - wordCount);
            }
            wordCount = 0;
        } else {
            wordCount++;
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a sentence ('exit' to quit): ";
        cin >> input;
        if (input == "exit") break;
        cout << spinWords(input) << endl;
    }
    return 0;
}