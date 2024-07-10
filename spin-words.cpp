#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(wordLength, i - wordLength) + " ";
            wordLength = i + 1;
        } else if (i == str.length() - 1) {
            result += str.substr(wordLength);
        }
    }

    for (int i = 0; i < result.length(); i++) {
        if (result[i] != ' ') {
            int j = i;
            while (j < result.length() && result[j] != ' ')
                j++;
            string word = result.substr(i, j - i);
            if (word.length() >= 5) {
                for (int k = word.length() - 1; k >= 0; k--)
                    result.replace(i, j - i + 1, word[k]);
                i += word.length();
            }
        } else
            i++;
    }

    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence or 'q' to quit: ";
        cin >> str;
        if (str == "q")
            break;
        cout << spinWords(str) << endl;
    }
    return 0;
}