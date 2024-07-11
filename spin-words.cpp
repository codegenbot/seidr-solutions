```cpp
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    int start = 0;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            word = str.substr(start, i - start);
            if (word.length() >= 5) {
                string reversedWord = "";
                for (int k = word.length() - 1; k >= 0; k--)
                    reversedWord += word[k];
                result += reversedWord + " ";
            } else 
                result += word + " ";
            start = i + 1;
        }
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    cout << "Spun result: " << spinWords(str) << endl;
    return 0;
}