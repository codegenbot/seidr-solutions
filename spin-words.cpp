#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i <= str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
            continue;
        }
        int j = i;
        while (j < str.length() && str[j] != ' ') {
            j++;
        }
        string word = str.substr(i, j - i);
        if (word.length() >= 5) {
            for (int k = word.length() - 1; k >= 0; k--) {
                result += word[k];
            }
            result += " ";
        } else {
            result += word + " ";
        }
        i = j;
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    
    if (str.empty()) {
        cout << "Program did not receive expected input" << endl;
    } else {
        cout << "Spun result: " << spinWords(str) << endl;
    }
    
    return 0;
}