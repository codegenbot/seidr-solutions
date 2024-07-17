```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string spinWords(string str) {
        string result = "";
        int i = 0;
        while (i < str.length()) {
            if (str[i] == ' ') {
                result += " ";
                i++;
            } else {
                int j = i;
                while (j < str.length() && str[j] != ' ') {
                    j++;
                }
                string word = str.substr(i, j - i);
                if (word.length() >= 5) {
                    string revWord = "";
                    for (int k = word.length() - 1; k >= 0; k--) {
                        revWord += word[k];
                    }
                    result += revWord + " ";
                } else {
                    result += word + " ";
                }
                i = j;
            }
        }
        return result;
    }
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}