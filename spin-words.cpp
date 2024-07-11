#include <algorithm>
#include <string>
#include <iostream>

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

string spinWords(string str) {
    string spun = "";
    size_t start = 0;
    while (start < str.length()) {
        size_t end = start;
        while (end < str.length() && str[end] != ' ') {
            end++;
        }
        string word = str.substr(start, end - start);
        if (word.length() >= 5) {
            spun += string(reverse(word)) + " ";
        } else {
            spun += word + " ";
        }
        start = end + 1;
    }
    return spun;
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    cout << "Spun result: " << spinWords(str) << endl;
    return 0;