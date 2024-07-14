Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            wordCount++;
        } else {
            if (wordCount > 0) {
                result += str[i];
            }
        }
    }
    
    vector<string> words;
    wordCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            wordCount++;
        } else if (i == str.length() - 1) {
            string word = "";
            while (wordCount > 0 && i >= 0) {
                word = str[i] + word;
                i--;
                wordCount--;
            }
            words.push_back(word);
        }
    }

    result = "";
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            string reversedWord = "";
            for (int j = words[i].length() - 1; j >= 0; j--) {
                reversedWord += words[i][j];
            }
            result += reversedWord + " ";
        } else {
            result += words[i] + " ";
        }
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence (or 'exit' to quit):";
        cin >> str;
        if (str == "exit") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}