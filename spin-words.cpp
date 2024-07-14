#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                result += word.substr(word.length() - 1) + word.substr(0, word.length() - 1);
            } else {
                result += word;
            }
            start = i + 1;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    cin >> str;
    cout << spinWords(str) << endl;
    return 0;
}