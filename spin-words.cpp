#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    vector<string> words;
    
    // split the string into words
    string word;
    for (char c : str) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    for (string w : words) {
        if (w.length() >= 5)
            result += (reverse(w)) + " ";
        else
            result += w + " ";
    }

    return result.substr(0, result.size()-1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    cout << spinWords(str) << endl;

    return 0;
}