#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    int spaces[1000];
    int index = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            spaces[index++] = i;
        }
    }

    string result = "";
    int wordIndex = 0;
    int prevSpaceIndex = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (prevSpaceIndex != spaces[wordIndex]) {
                string word = str.substr(prevSpaceIndex, i - prevSpaceIndex);
                if (word.length() >= 5) {
                    for (int j = word.length() - 1; j >= 0; j--) {
                        result += word[j];
                    }
                } else {
                    result += word;
                }
            }
            prevSpaceIndex = spaces[wordIndex] + 1;
            wordIndex++;
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