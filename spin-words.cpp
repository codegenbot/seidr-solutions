#include <string>
#include <iostream>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; --i)
                    result += word[i];
            } else
                result += word;
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; --i)
            result += word[i];
    } else
        result += word;
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string of one or more words (separated by spaces): ";
    cin >> str;
    string result = spinWords(str);
    cout << "Result: " << result << endl;
    return 0;
}